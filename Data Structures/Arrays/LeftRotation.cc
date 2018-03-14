#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int main()
{
    int n,d;
    cin>>n>>d;
    vector<int> v;
    vector<int> v2(n);
    for(int i = 0;i<n;++i){
        int k;
        cin>>k;
        v.emplace_back(k);
    }
    for(int i=0; i <n;++i){
        v2[i]=v[(i+d)%n];
    }
    for(int i=0; i <n;++i){
        cout <<v2[i]<<" ";
    }
    return 0;
}