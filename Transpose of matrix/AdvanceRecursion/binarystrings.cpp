#include<iostream>
using namespace std;
void binarstring(string str,int idx,int n){
      
      if(idx==n){
            cout<<str;
            cout<<endl;
            return;
      }
      binarstring(str+'0',idx+1,n);
      if(str == "" || str[str.length()-1] == '0')binarstring(str+'1',idx+1,n);
}
int main(){
      binarstring("",0,3);
      return 0;
}