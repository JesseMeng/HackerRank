#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector <int> arr) {
    // Complete this function
    double a = 0;
    double b = 0;
    double c = 0;
    for(auto n: arr){
        if(n >0){
            ++a;
        }else if(n == 0){
            ++b;
        }else ++c;
    }
    cout<<fixed<<setprecision(6)<<a/arr.size()<<endl;
    cout<<fixed<<setprecision(6)<<c/arr.size()<<endl;
    cout<<fixed<<setprecision(6)<<b/arr.size()<<endl;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0; arr_i < n; arr_i++){
       cin >> arr[arr_i];
    }
    plusMinus(arr);
    return 0;
}
