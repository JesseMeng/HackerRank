/*
   Find merge point of two linked lists
   Node is defined as
   struct Node
   {
       int data;
       Node* next;
   }
*/
int FindMergeNode(Node *headA, Node *headB)
{
    // Complete this function
    // Do not write the main method. 
    Node* it1 = headA;
    Node* it2 = headB;
    while(it1 != it2){
        if(it1->next == nullptr){
            it1 = headB;
        }else{
            it1 = it1->next;
        }
        if(it2->next == nullptr){
            it2 = headA;
        }else{
            it2 = it2->next;
        }
    }
    return it1->data;
}