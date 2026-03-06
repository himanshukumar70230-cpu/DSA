#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<string,int>m;
    
   pair<string,int>p1;
   p1.first = "Himanshu";
   p1.second = 21;
   pair<string,int>p2;
   p2.first = "pucchu";
   p2.second = 20;
   m.insert(p1);
   m.insert(p2);
   m["Rasgulla"] = 14;
  // m.erase("Rasgulla");
    for(pair<string,int> p :m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    cout<<endl;
    m.erase("Rasgulla");
    for(auto p:m){
        cout<<p.first<<" "<<p.second<<endl;
    }
    return 0;
}