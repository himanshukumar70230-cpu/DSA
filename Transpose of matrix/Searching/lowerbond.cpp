#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,3,5,18,21,24};
    int x = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    int lo = 0;
    int hi = n-1;
    //int mid = (lo+hi)/2;
    while(lo<=hi){
      int mid = (lo+hi)/2;
    if(arr[mid]==x){
        cout<<arr[mid-1];
        break;
    }  
    else if(arr[mid]<x){
      lo = mid+1;  
    }
    else{
        hi = mid-1;
    }

}
cout<<arr[hi];
    return 0;
}