#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int N;
    cin>>N;
    vector<int> v;
    for(int i = 0; i<N; ++i){
        int k;
        cin>>k;
        v.emplace_back(k);
    }
    int Q;
    cin>>Q;
    for(int i =0; i<Q;++i){
        int j;
        cin>>j;
        auto low = lower_bound(v.begin(), v.end(), j);
        if(v[low-v.begin()] == j){
            cout << "Yes "<<low-v.begin()+1<<endl;
        }else{
            cout << "No "<<low-v.begin()+1<<endl;
        }
    }
    return 0;
}
