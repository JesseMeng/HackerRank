/*
    Insert Node in a doubly sorted linked list 
    After each insertion, the list should be sorted
   Node is defined as
   struct Node
   {
     int data;
     Node *next;
     Node *prev;
   }
*/ 
Node* SortedInsert(Node *head,int data)
{
    if(head == nullptr){
        head = new Node{data, nullptr, nullptr};
        return head;
    }else{
        Node* steps = head;
        while(steps->data < data && steps->next != nullptr){
            steps=steps->next;
        }
        //either steps->next is nullptr or steps->data >= data
        if(steps->data >=data ){
            Node* tmp = steps->prev;
            steps->prev = new Node{data,steps,tmp};
            if(tmp == nullptr) return steps->prev;
            tmp->next = steps->prev;
            return head;

        }else{//steps->data >=data
            steps->next=new Node{data, nullptr, steps};
            return head;
        }
    }
    // Complete this function
   // Do not write the main method. 
}