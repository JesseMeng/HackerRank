/*
  Remove all duplicate elements from a sorted linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* RemoveDuplicates(Node *head)
{
  // This is a "method-only" submission. 
  // You only need to complete this method. 
    if(head == nullptr) return nullptr;
    int temp = head->data;
    Node* ans = head;
    while(head->next != nullptr){
        if(head->next->data == temp){
            head->next=head->next->next;
        }else{
            head = head->next;
            temp = head->data;
        }
    }
    return ans;
}