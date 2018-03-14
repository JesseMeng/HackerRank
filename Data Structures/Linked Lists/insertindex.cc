/*
  Insert Node at a given position in a linked list 
  head can be NULL 
  First element in the linked list is at position 0
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* InsertNth(Node *head, int data, int position)
{
  // Complete this method only
  // Do not write main function. 
    if(position == 0){
        head = new Node{data, head};
        return head;
    }
    Node* ans = head;
    while(position > 1){
        head = head->next;
        --position;
    }
    head->next = new Node{data, head->next};
    return ans;
}
