#include<iostream>
#include<climits>
using namespace std;
void maxElement(int arr[],int n,int idx,int max){
      if(idx==n){
            cout<<max;
            return;
      }
      if(arr[idx]>max) max = arr[idx];
      maxElement(arr,n,idx+1,max);
}
int main(){
      int a[] = {1,2,3,9,5,6};
      int n = sizeof(a)/sizeof(a[0]);
       maxElement(a,n,0,INT_MIN);

      return 0;
}