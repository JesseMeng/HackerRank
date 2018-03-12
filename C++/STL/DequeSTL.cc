#include <iostream>
#include <deque> 
using namespace std;

void printKMax(int arr[], int n, int k){
   //Write your code here.
    deque<int> q;
    q.push_back(0);
    for(int i = 1; i<k; ++i){
        while(!(q.empty()) && arr[i]>= arr[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }
    for( int i = k;i<n;++i){
        cout << arr[q.front()]<<" ";
        //take away elements outside the window
        while((!q.empty()) && q.front() <= i-k){
            q.pop_front();
        }
        //take away useless elements
        while((!q.empty()) && arr[i]>= arr[q.back()]){
            q.pop_back();
        }
        q.push_back(i);    
    }
    cout <<arr[q.front()];
    cout << endl;
}




int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
     }
     return 0;
}
