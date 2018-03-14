#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
struct Node{
    int z;
    Node* next;
};
int sizeN(Node* k){
    Node *m = k;
    int ans = 0;
    if(m == nullptr) return 0;
    ++ans;
    while(m->next !=nullptr){
        m=m->next;
        ++ans;
    }
    return ans;
}
void Aappend(int x, Node* k){
    Node* m = k;
    if(m==nullptr){
        m=new Node{x, nullptr};
    }else{
        while(m->next!=nullptr){
            m=m->next;
        }
        m=new Node{x,nullptr};
    }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,q;
    cin>>n>>q;
    int lastAnswer = 0;
    vector<vector<int>>seqList;
    for(int i=0; i<n;++i){
        vector<int> v;
        seqList.emplace_back(v);
    }
    for(int i = 0; i<q;++i){
        int type,x,y;
        cin>>type>>x>>y;
        if(type == 1){
             seqList[(x^lastAnswer)%n].emplace_back(y);
        }else{
            lastAnswer=seqList[(x^lastAnswer)%n][y%(seqList[(x^lastAnswer)%n].size())];
            cout <<lastAnswer<<endl;
        }
    }
    return 0;
}