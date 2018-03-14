/*
   Reverse a doubly linked list, input list may also be empty
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/
Node* Reverse(Node* head)
{
    // Complete this function
    // Do not write the main method. 
    if(head == nullptr)return nullptr;
    Node* actual = head->next;
    head->next = nullptr;
    head->prev = actual;
    head = head->prev;
    while(head!=nullptr){
        Node* actual = head->next;
        head->next = head->prev;
        head->prev = actual;
        if(head->prev == nullptr)return head;
        head = head->prev;
    }
    return head;
}