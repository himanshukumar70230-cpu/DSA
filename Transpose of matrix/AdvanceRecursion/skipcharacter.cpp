#include<iostream>
#include<string>
using namespace std;
void removechar(string ans,string original,int idx){
      if(idx== original.length()){
            cout<<ans;
            return;
      }
      if(original[idx] != 'h') ans+=original[idx];
      removechar(ans,original,idx+1);
}

int main(){
      string str ="himanshju";
      removechar("",str,0);
      return 0;
}