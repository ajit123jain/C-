#include<iostream>
using namespace std;
struct Node{
  int data;
  Node *next;
} *head;
void printList(Node* n) 
{ 
  while (n != NULL) { 
    cout << n->data << " "; 
    n = n->next; 
  } 
} 
void insertAfter(int k,Node **n){
  if(*n == NULL){
    Node *node = new Node;
    node->data = k;
    node->next = NULL;
    *n = node;
    // printList(n);
    return;
  }
  else{
    Node *temp = *n;
    Node *newnode = new Node;
    newnode->data = k;
    newnode->next = NULL;
    while(temp->next != NULL){
      temp = temp->next;
    }
    temp->next = newnode;
  }
}
void insertPrevious(int k,Node **n){
  Node *newnode = new Node;
  newnode->data = k;
  newnode->next = *n;
  *n = newnode;
  return ;
}
void findKey(int k,Node **n){
  bool flag = false;
  if(*n == NULL)
  {
    cout << "Linklist Doesn't have any element\n";
    return;
  }
  Node *temp = *n;
  while(temp->next != NULL){
    if(temp->data == k){
      cout << k <<" is present\n";
      flag = true;
      break;
    }
    else{
      temp = temp->next;
    }
  }
  if (!flag)
   cout << "Key Not found in the linklist.\n";
}
void linklistSize(Node **n){
  Node *temp = *n;
  int count = 0;
  if(*n == NULL){
    cout << "Linklist is zero";
    return ;
  }
  while (temp != NULL)
  {
    cout << temp->data << " \n";
    count++;
    temp = temp->next;
  }
  cout << "Linklist size is "<< count << endl;
}
int main(){
  insertAfter(5,&head);
  insertAfter(15,&head);
  insertAfter(20,&head);
  insertAfter(25,&head);
  insertPrevious(100,&head);
  insertPrevious(110,&head);
  linklistSize(&head);
  findKey(15,&head);
  findKey(30,&head);
  printList(head);
  linklistSize(&head);
  return 0;
}