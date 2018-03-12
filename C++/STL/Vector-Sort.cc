#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; ++i){
        int dum;
        cin >> dum;
        v.emplace_back(dum);
    }
    sort(v.begin(), v.end());
    for(auto z : v){
        cout << z <<" ";
    }
    return 0;
}