/*
  Reverse a linked list and return pointer to the head
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Reverse(Node *head)
{
    if(head == nullptr)return nullptr;
    Node* cur= head;
    Node* next = nullptr;
    Node* prev = nullptr;
    while(cur != nullptr){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    head = prev;
    return head;
}
