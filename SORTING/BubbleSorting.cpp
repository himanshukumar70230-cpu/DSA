#include<iostream>
#include<vector>
using namespace std;
int main(){
      bool flag;
vector<int>v(5);
for(int i=0;i<5;i++){
      cin>>v[i];
}
for(int i = 0;i<4;i++){
      flag = true;
      for(int j = 0;j<(5-i-1);j++){
            if(v[j]>v[j+1]){

                  int temp = v[j];
                  v[j] = v[j+1];
                  v[j+1] = temp;
                  flag = false;
            }
            
      }
      if(flag == true) break;
}
for(int i = 0;i<5;i++){
      cout<<v[i]<<" ";
}
      return 0;
}