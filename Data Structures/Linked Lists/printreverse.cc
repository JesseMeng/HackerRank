/*
  Print elements of a linked list in reverse order as standard output
  head pointer could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
#include <vector>
void ReversePrint(Node *head)
{
   if(head == nullptr) return;
    vector<int> v;
    v.emplace_back(head->data);
   while(head->next != nullptr){
       head = head->next;
       v.emplace_back(head->data);
   }
   for(auto it = v.rbegin(); it!=v.rend();++it){
       cout << *it<<endl;
   }
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}