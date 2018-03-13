#include <bits/stdc++.h>

using namespace std;

void miniMaxSum(vector <int> arr) {
    // Complete this function
    int min = arr[0];
    int max = arr[0];
    long long int sum= 0;
    for(auto n: arr){
        if(n < min) min=n;
        if(n>max)max=n;
        sum+=n;
    }
    cout << sum-max <<" "<<sum-min;
}

int main() {
    vector<int> arr(5);
    for(int arr_i = 0; arr_i < 5; arr_i++){
       cin >> arr[arr_i];
    }
    miniMaxSum(arr);
    return 0;
}