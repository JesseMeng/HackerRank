#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int Q;
    cin >>Q;
    map<string, int>m;
    for(int i =0; i<Q;++i){
        int type;
        cin >> type;
        if(type == 1){
            string name;
            int mark;
            cin >> name;
            cin >> mark;
            if(m.find(name)==m.end()){
                m.insert(make_pair(name, mark));
            }else{
                m[name]=m[name]+mark;
            }          
        }else if(type == 2){
            string name;
            cin>>name;
            m.erase(name);
        }else{
            string name;
            cin >> name;
            cout << m[name]<<endl;
        }
    }
    return 0;
}