#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int>p;
    p.push(10);
    p.push(82);
    p.push(-3);
    cout<<p.top()<<endl;
    priority_queue<int,vector<int>,greater<int>>pq;
    pq.push(2);
    pq.push(3);
    pq.push(-1);
    cout<<pq.top();
    return 0;
}