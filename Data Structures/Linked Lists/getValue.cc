/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include<vector>
int GetNode(Node *head,int positionFromTail)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    vector<int> v;
    while(head != nullptr){
        v.emplace_back(head->data);
        head = head->next;
    }
    return v[v.size()-1-positionFromTail];
}
