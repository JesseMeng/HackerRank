#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int>v;
    int N;
    cin>>N;
    for(int i = 0; i< N;++i){
        int k;
        cin>>k;
        v.emplace_back(k);
    }
    int pos;
    cin>>pos;
    v.erase(v.begin()+pos-1);
    int i,j;
    cin>>i>>j;
    v.erase(v.begin()+i-1,v.begin()+j-1);
    cout <<v.size()<<endl;
    for(auto n:v){
        cout<<n<<" ";
    }
    return 0;
}
