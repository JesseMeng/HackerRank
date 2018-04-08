//Question asks me to give a loaf of bread to some person i, and I must give a loaf to one person adjacent to him too.
//I want to know what is the minimum possibe loafs to distribute so that everyone has an even number
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    vector<int> v;
    int count = 0;
    for(int i=0; i<n; ++i){
        int k;
        cin>>k;
        v.emplace_back(k%2);
        count+=k%2;
    }
    //since each time i give 2, if initial total is odd we can never get even
    if(count%2 == 1){
        cout << "NO";
    }else{
        //otherwise go through the array, whenever someone has odd, give that perso and the person after him each a bread
        //this will terminate for sure and it's most efficient 
        int ans = 0;
        for(int i=0; i<n;++i){
            if(v[i]%2!=0){
                v[i]++;
                v[i+1]++;
                ans+=2;
            }
        }
        cout <<ans;
    }
    return 0;
}