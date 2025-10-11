#include<iostream>
#include<vector>
using namespace std;
void Grammar(vector<int> ans,int right,int left){
      if(left>2*right){
            for(int i = 0;i<ans.size();i++){
                  cout<<ans[i]<<endl;
            }
            return;
      }
      if(right ==0){
            ans.push_back(right);
            ( ans, right, left);
            ans.push_back(left);
             ( ans, right, left);
      } if(right ==1){
            ans.push_back(left);
            ( ans, right, left);
            ans.push_back(right);
             ( ans, right, left);
      }
}
int main(){
      vector<int>v;

       (v, 0, 1);
      return 0;
}