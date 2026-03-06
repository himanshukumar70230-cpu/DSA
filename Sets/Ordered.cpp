#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
    set<int>s;
    s.insert(5);
    s.insert(3);
    s.insert(8);
    for(int ele:s){
        cout<<ele<<" ";
    }
    cout<<endl<<"map"<<endl;
    map<int,int>m;
    m[1] = 30;
    m[2] = 20;
    m[3] = 40;
    for(auto x : m){
       cout<<x.first<<" "<<x.second<<endl;
    }
    return 0;
}