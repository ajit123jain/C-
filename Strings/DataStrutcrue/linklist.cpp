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
int main(){
  insertAfter(5,&head);
  insertAfter(15,&head);
  insertAfter(20,&head);
  insertAfter(25,&head);
  // insertAfter(10,head);
  // insertAfter(10);
  // insertAfter(15);
  // Node *pre = new Node;
  // pre->data = 10;
  // pre->next = head;
  printList(head);
  return 0;
}