/*
Detect a cycle in a linked list. Note that the head pointer may be 'NULL' if the list is empty.

A Node is defined as: 
    struct Node {
        int data;
        struct Node* next;
    }
*/
#include <unordered_set>
bool has_cycle(Node* head) {
    // Complete this function
    // Do not write the main method
    if(head == nullptr)return false;
    unordered_set<Node*>s;
    while(head != nullptr){
        if(s.find(head)!=s.end()) return true;
        s.insert(head);
        head = head->next;
    }
    return false;
}