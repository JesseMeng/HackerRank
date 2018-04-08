//Given  a string I need to produce its next bigger permutation
//My algorithm works by checking from last character, if the order of characters go from 
//back is smallest and increasing toward the first being biggest, then there is no bigger permutation
//Otherwise, I can find an element that is smaller than the next element, I want the next bigger permutation
//so I will swap this element with the next biggest element. Then I put the rest in increasing order
//so size could be minimized
#include <bits/stdc++.h>

using namespace std;

string biggerIsGreater(string w) {
    // Complete this function
    for(int i=w.length()-1; i>=1;--i){
        if(w[i]>w[i-1]){
            char temp = w[i-1];
            for(int j=i;j<w.length();++j){
                //either we reach the end or we have found the right element to swap with
                if(j==w.length()-1 || temp>=w[j+1]){
                    w[i-1]=w[j];
                    w[j]=temp;
                    //reverse from i to end to generate smallest sequence
                    reverse(w.begin()+i,w.end());
                    return w;
                }
            }
        }
    }
    return "no answer";
}

int main() {
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        string w;
        cin >> w;
        string result = biggerIsGreater(w);
        cout << result << endl;
    }
    return 0;
}