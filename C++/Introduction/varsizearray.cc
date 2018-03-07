#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int numOfArray;
    int numOfQ;
    cin >> numOfArray >> numOfQ;
    vector<vector<int>> v;
    for(int i=0; i<numOfArray;++i){
        int dum;
        cin >> dum;
        vector<int> v0;
        for(int j=0; j < dum; ++j){
            int c;
            cin >> c;
            v0.emplace_back(c);
        }
        v.emplace_back(v0);
    }
    for(int i = 0; i < numOfQ ; ++i){
        int index1;
        cin >> index1;
        int index2;
        cin >> index2;
        cout <<v[index1][index2]<<endl;
        
    }
    return 0;
}
