//Question asks, for given an array of integers, find the minimum distance between any pair of equal elements in the array
//My solution is first walk thorugh the array and create a map of minimal distance for each value.
//Then I go through the map to find out the minimum distance
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include<map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    cin>>n;
    //this map maps each integer to its minimum distance
    map<int,pair<int,int>> m;
    bool det = true;
    for(int i=1; i<=n; ++i){
        int k;
        cin>>k;
        if(m[k].first==0){
            m[k]=make_pair(-i,i);
        }else if(m[k].first<0){
            det = false;
            m[k]=make_pair(i+m[k].first,i);
        }else{
            if((i-m[k].second)<m[k].first){
                m[k].first=i-m[k].second;
            }
        }
    }
    int min = 10001;
    //walk through the map to find which of the element has a minimum distance.
    for(auto z : m){
        if(z.second.first >=1 && z.second.first < min)  min = z.second.first;
    }
    if(det)cout << -1;
    else cout << min;
    return 0;
}