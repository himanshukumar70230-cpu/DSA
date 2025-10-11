#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,3,3,3,3,3,3,4,5,8};
    int x = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0;
    int hi = n-1;
    while(lo<= hi){
    int mid = (lo+hi)/2;
    if(arr[mid]==x){
      if(arr[mid-1] == x) {
          hi = mid-1;
      }else {
          cout<<arr[lo]<<" "<<lo;
          break;
      }
    }  
    
    else if(arr[mid]<x){
      lo = mid+1;  
    }
    else{
        hi = mid-1;
    }
}
    return 0;
}