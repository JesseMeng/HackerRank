#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >>n;
    vector<int> v;
    for(int i = 0; i < n; ++i){
        int dum;
        cin>>dum;
        v.emplace_back(dum);
    }
    for(int i = v.size()-1; i>=0; --i){
        cout << v[i]<<" ";
    }
    return 0;
}
