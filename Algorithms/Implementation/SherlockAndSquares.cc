/*
Question asks given A and B, print the number of perfect sqaures in that range
Solution takes counts the number of square roots of the perfect squares, which is the same answer
 */


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//x^2<=a<=b<=y^2
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    for(int i=0;i<t;++i){
        int a,b;
        cin>>a>>b;
        int ans=0;
        cout <<floor(sqrt(b))-ceil(sqrt(a))+1<<endl;
    }
    return 0;
}