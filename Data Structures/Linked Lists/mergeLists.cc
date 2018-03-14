/*
  Merge two sorted lists A and B as one linked list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* MergeLists(Node *headA, Node* headB)
{
  // This is a "method-only" submission. 
  // You only need to complete this method 
  Node* cur;
  Node* ans;
  if(headA== nullptr && headB==nullptr)return nullptr;
  if(headA == nullptr) return headB;
  if(headB == nullptr) return headA;
    
    if(headA->data >=headB->data){
        cur = new Node{headB->data,nullptr};
        ans = cur;
        headB=headB->next;
    }else{
        cur = new Node{headA->data, nullptr};
        ans = cur;
        headA=headA->next;
    }
  
  while((headA != nullptr) && (headB != nullptr)){
      if(headA->data >= headB->data){
          cur->next = new Node{headB->data, nullptr};
          headB=headB->next;
      }else{
          cur->next = new Node{headA->data, nullptr};
          headA=headA->next;
      }
      cur= cur->next;
  }
    if(headA != nullptr){
        cur->next=headA;
    }
    if(headB != nullptr){
        cur->next=headB;
    }

    return ans;
}