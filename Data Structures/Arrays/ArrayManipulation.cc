#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n;
    long long int m;
    cin >> n >> m;
    vector<long long int>v(n);
    long long int max = 0;
    for(int a0 = 0; a0 < m; a0++){
        int a;
        int b;
        long long int k;
        cin >> a >> b >> k;
        v[a-1]+=k;
        if(b<n) v[b]-=k;
    }

    long long int sum = 0;
    for(int i= 0; i<n;++i){
        sum+=v[i];
        if(sum>max) max=sum;
    }
    cout << max;
    return 0;
}