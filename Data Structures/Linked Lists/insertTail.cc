/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    Node* ans = head;
    if(ans == nullptr){
        head=new Node{data, nullptr};
        return head;
    }
    while(ans->next !=nullptr){
        ans=ans->next;
    }
    ans->next = new Node{data,nullptr};
    return head;
  // Complete this method
}