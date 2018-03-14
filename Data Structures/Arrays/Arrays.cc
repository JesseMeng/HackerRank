#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i<n; ++i){
        int k;
        cin>>k;
        v.emplace_back(k);
    }
    for(int i = n-1; i>=0; --i){
        cout << v[i]<<" ";
    }

    return 0;
}
