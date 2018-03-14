/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
  // Complete this method
    if(position == 0){
        Node * ans = head->next;
        head->next = nullptr;
        delete head;
        return ans;
    }
    Node *ans1 = head;
    while(position > 1){
        ans1=ans1->next;
        position--;
    }
    Node * ans = ans1->next->next;
    delete ans1->next;
    ans1->next = ans;
    return head;
}