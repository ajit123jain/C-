#include <iostream>
#include <cstdlib>
using namespace std;
struct node
{
  int info;
  node *left;
  node *right;
}*root;

class BST{
  public:
  void find(int, node **,node **); 
  void insert(node *,node *);
  void preorder(node *);
  void inorder(node *);
  void postorder(node *);
  void del(int);
  void case_a(node *,node *);
  void case_b(node *,node *);
  void case_c(node *,node *);
  BST()
    {
      root = NULL;
    }
};
void insert(BST bst,int k){
  node *temp;
  temp = new node;
  temp->info = k;
  bst.insert(root,temp);
}
int main(){
  BST bst;  
  insert(bst,4);
  insert(bst,10);
  insert(bst,20);
  insert(bst,2);
  insert(bst,9);
  bst.preorder(root);
  bst.inorder(root);
  bst.postorder(root);
  return 0;
}
void BST::find(int item,node **par, node **loc){
  node *ptr,*ptrsave;
  if(root == NULL){
    *loc = NULL;
    *par = NULL;
    return ;
  }
  if(item == root->info){
    *loc = root;
    *par = NULL;
    return;
  }
  if (item < root->info)
  {
    ptr = root->left;
  }
  else
    ptr = root->right;
    ptrsave = root;
    while (ptr != NULL)
    {
      if(item == ptr->info)
      {
        *loc = ptr;
        *par = ptrsave;
        return;
      }
      ptrsave = ptr;
      if(item < ptr->info)
        ptr = ptr->left;
      else 
        ptr = ptr->right;
    }
    *loc = NULL;
    *par = ptrsave;
     
  
}

void BST::insert(node *tree,node *newnode)
{
  if(root == NULL){
    root = new node;
    root->info = newnode->info;
    root->left = NULL;
    root->right = NULL;
    cout<<"Root Node is Added"<<endl;
    return ;
  }
  if(tree->info == newnode->info)
  {
    cout<<"Element already in the tree"<<endl;
      return;
  }
  if(tree->info > newnode->info){
    if(tree->left != NULL){
      insert(tree->left,newnode);
    }
    else{
    tree->left = newnode;
    (tree->left)->left = NULL;
    (tree->left)->right = NULL;
    cout<<"Node Added To Left"<<endl;
    return;
    }
  }
  else
  {
    if (tree->right != NULL)
    {
        insert(tree->right, newnode);
    }
    else
    {
      tree->right = newnode;
      (tree->right)->left = NULL;
      (tree->right)->right = NULL;
      cout<<"Node Added To Right"<<endl;
      return;
    }	
  } 
}
void BST::preorder(node *ptr)
{
  if(root == NULL){
    cout<<"Tree is empty"<<endl;
      return; 
  }
  if (ptr!= NULL)
  {
    cout<<ptr->info<< " ";
    preorder(ptr->left);
    preorder(ptr->right);
  }  
}
void BST::inorder(node *ptr)
{
  if(root == NULL){
    cout<<"Tree is empty"<<endl;
      return; 
  }
  if (ptr!= NULL)
  {
    inorder(ptr->left);
    cout<<ptr->info<< " ";
    inorder(ptr->right);
  }  
}
void BST::postorder(node *ptr)
{
  if(root == NULL){
    cout<<"Tree is empty"<<endl;
      return; 
  }
  if (ptr!= NULL)
  {
    postorder(ptr->left);
    postorder(ptr->right);
    cout<<ptr->info<< " ";
  }  
}
void BST::del(int item)
{
  node *parent, *location;
  if(root == NULL){
    cout << "Tree empty."
  }
  find(item,&parent,&location);
  if(location == NULL){
    cout<<"Item not present in tree"<<endl;
    return;
  }
}