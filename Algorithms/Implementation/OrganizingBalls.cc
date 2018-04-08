//Question gives the number of balls of each type in each container and asks if it's
//possible to swap balls such that all the balls of the same type are located in the different containers
//Since swaps never change the number of balls in a container, the number of balls in each container must match the number of
//balls for each type if swaps are possible

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int q;
    cin>>q;
    for(int i=0; i<q;++i){
        int n;
        cin>>n;
        //vector to store number of balls of each type
        vector<int> v(n);
        vector<int> v2(n);
        for(int j=0; j<n;++j){
            for(int m=0; m<n;++m){
                int o;
                cin >>o;
                v[m]+=o;
                v2[j]+=o;//number of balls in each container j
            }
        }
        //see if the balls of each type would match the balls in each container
        sort(v.begin(),v.end());
        sort(v2.begin(),v2.end());
        if(v==v2){
            cout << "Possible"<<endl;
        }else{
            cout <<"Impossible"<<endl;
        }
    }
    return 0;
}