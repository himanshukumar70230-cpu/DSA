#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>>sumofarry(int weights[],int n,vector<int>r,int mid,int days) {
    int sum = 0;
    vector<vector<int>>s;
       // s.push_back(r);
    
   for(int i = 0;i<n;i++){
    sum+=weights[i];
    if(sum<=mid){
        r.push_back(weights[i]);
    }
    else{
       sum = weights[i];
       days++;
       s.push_back(r);
       r.clear();
       r.push_back(weights[i]); 
    }

   }
   s.push_back(r);
return s;
}
int main(){
     int  weights[] = {3,2,2,4,1,4};
     int n = sizeof(weights)/sizeof(weights[0]);
     //vector<vector<int>>s;
     vector<int>a;
     int lo = *max_element(weights,weights+n);
int i,j,sum=0;
for(int i = 0;i<n;i++){
    sum+=weights[i];
}
int hi = sum;
while(lo<=hi){
int mid = (hi+lo)/2;

}
vector<vector<int>>s = sumofarry( weights, n,a, 6, 0);
for( i = 0;i<s.size();i++){
    for( j = 0;j<s[i].size();j++){
        cout<<s[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}