#include<iostream>
using namespace std;
void mazepath(string str,int minr,int minc,int maxr,int maxc){
      if(minr>maxr||minc>maxc) return;
      if(minr==maxr && minc == maxc){
            cout<<str<<endl;
            return;
      }
      mazepath( str+'D', minr, minc+1, maxr, maxc);      
      mazepath( str+'R', minr+1, minc, maxr, maxc);
}
int main(){
      mazepath("",0,0,2,2);
      return 0;
}