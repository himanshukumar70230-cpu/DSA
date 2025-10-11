#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
      int k = 5;
int a[k] = {5,3,1,4,2};
//vector<int>v;
for(int i = 0;i<k-1;i++){
      int min = INT_MAX;
     int  mindx = -1;
      for(int j = i;j<k;j++){
            if(min>a[j]) {
                  min = a[j];
                  mindx = j;
            }
     }
       swap(a[i],a[mindx]);
      
}    
for(int i = 0;i<k;i++){
      cout<<a[i]<<" ";
}
      return 0;
}