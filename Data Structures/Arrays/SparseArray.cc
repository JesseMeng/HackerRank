#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int main()
{
    int n;
    cin>>n;
    vector<string> v;
    for(int i = 0; i< n;++i){
        string s;
        cin>>s;
        v.emplace_back(s);
    }
    int q;
    cin>>q;
    for(int i = 0; i< q;++i){
        string s;
        cin>>s;
        int count = 0;
        for(auto n: v){
            if(n == s){
                ++count;
            }
        }
        cout << count<<endl;
    }  
}