#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int diagonalDifference(vector < vector<int> > a) {
    // Complete this function
    int n = a.size();
    int l1 = 0;
    int l2 = 0;
    for(int i = 0; i < a.size();++i){
        l1+=a[i][i];
    }
    for(int j = n-1; j>=0;--j){
        l2+=a[j][n-1-j];
    }
    return abs(l1-l2);
}

int main() {
    int n;
    cin >> n;
    vector< vector<int> > a(n,vector<int>(n));
    for(int a_i = 0;a_i < n;a_i++){
       for(int a_j = 0;a_j < n;a_j++){
          cin >> a[a_i][a_j];
       }
    }
    int result = diagonalDifference(a);
    cout << result << endl;
    return 0;
}
