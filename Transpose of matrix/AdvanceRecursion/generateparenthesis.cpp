#include<iostream>
#include<string>
using namespace std;
void parent(string s,int open,int close,int n){
      if(close==n) {
            cout<<s<<endl;
            return;
      }
      if(open<n)parent(s+'(',open+1,close,n);
      if(close<open)parent(s+')',open,close+1,n);


}
int main(){
      parent("",0,0,3);
      return 0;
}