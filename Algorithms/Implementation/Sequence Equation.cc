//question gives a sequence of integers and a x, I need to see if there is any valid
//y such that the (y-thnumber)-th of the sequence is equal to x. My solution utilizes 
//two maps, an inverse map and a forward map
#include <cmath>
#include <cstdio>
#include <map>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    map<int,int> p;
    map<int,int> pinverse;
    for(int i=0;i<n;++i){
        int k;
        cin>>k;
        p[i+1]=k;
        pinverse[k]=i+1;
    }
    for(int i=1;i<=n;++i){
        cout<<pinverse[pinverse[i]]<<endl;
    }
    return 0;
}
