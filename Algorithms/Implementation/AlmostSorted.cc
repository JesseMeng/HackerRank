//Given an array, if it's sorted, print yes
//If I can sort this array using one swap, then output the swap indcies
//Otherwise if I can sort the array by reversing a segment, then output the reversal indices
//If the array cannot be sorted with one of the above operations, then output no
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
    vector<int> v2;
    int prev = -1;
    //storing the elements of the array in v, store unordered indices in v2
    for(int i= 0;i<n;++i){
        int k;
        cin>>k;
        v.emplace_back(k);
        if(prev > k){
            v2.emplace_back(i);
        }
        prev = k;
    }
    //if no unordered indices then we are good
    if(v2.empty()){
        cout << "yes";
    }
    //if there is only one unordered element, see if we can swap it
    else if(v2.size()==1){
        if((v2[0]==n-1 ||v[v2[0]-1]<v[v2[0]+1]) && (v2[0]==1 || v[v2[0]]>v[v2[0]-2]) ) cout << "yes"<<endl<<"swap "<<v2[0]<<" "<<v2[0]+1;
        else cout << "no";
    }
    //if there are 2 unordered elements, see if we can swap it
    else if(v2.size()==2){
        if(v[v2[0]-1]>v[v2[1]-1] && v[v2[1]]<v[v2[0]]) cout << "yes"<<endl<<"swap "<<v2[0]<<" "<<v2[1]+1;
    }
    else {//otherwise see if they are consecutive for reverse
        bool det = true;
        for(int i=0; i<v2.size()-1;++i){
            if(v2[i]!=v2[i+1]-1){
                det = false;
                break;      
            }
        }
        if(!det)cout << "no";
        else{
            if(v[v2[0]-1]<v[v2[v2.size()-1]+1] && v[v2[v2.size()-1]]>v[v2[0]-2]) 
                cout << "yes"<<endl<<"reverse "<<v2[0]<<" "<<v2[v2.size()-1]+1;
            else cout << "no";
        }
    }

    return 0;
}