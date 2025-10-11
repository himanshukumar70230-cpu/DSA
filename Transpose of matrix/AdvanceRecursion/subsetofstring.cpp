#include<iostream>
#include<string>
using namespace std;
void subSet(string ans,string original,int idx){
      if(idx == original.length()){
            cout<<ans<<endl;
            return;
      }
      char ch = original[idx];
      subSet(ans+ch,original,idx+1);
       subSet(ans,original,idx+1);
}
int main(){
      string str = "abc";
      subSet("",str,0);
      return 0;
}