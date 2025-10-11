#include<iostream>
#include<vector>
using namespace std;
int main(){
      int height[] = {0,1,0,2,1,0,1,3,2,1,2,1};
      int n = sizeof(height)/sizeof(height[0]);
      //cout<<n;
      vector<int>arr;
      for(int i = 1;i<n-2;i++){
            if(height[i]<height[i+1]){
                  arr.push_back(height[i+1]);
            }
      }
      for(int i = 0;i<arr.size();i++){
            cout<<arr[i]<<" ";
      }
      return 0;
}