#include<iostream>
#include<queue>
using namespace std;
int main(){
   int arr[] = {10,20,-4,5,18,24,1,-7,56};
   int n = sizeof(arr)/sizeof(arr[0]);
   int k = 4;
   priority_queue<int>p;
    for(int i = 0;i<n;i++){
        p.push(arr[i]);
        if(p.size()>k) p.pop();
    }
    cout<<p.top();
  return 0;
}