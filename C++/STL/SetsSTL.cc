#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    set<int>s;
    int Q;
    cin >> Q;
    for(int i = 0; i < Q; ++i){
        int m,j;
        cin>>m>>j;
        if(m == 1){
            s.insert(j);
        }else if(m == 2){
            s.erase(j);
        }else{
            if(s.find(j) == s.end()){
                cout << "No"<<endl;
            }else{
                cout <<"Yes"<<endl;
            }
        }
    }
    return 0;
}