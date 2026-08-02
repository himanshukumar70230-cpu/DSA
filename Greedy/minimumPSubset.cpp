#include<bits/stdc++.h>
using namespace std;
int minProduct(vector<int>&arr){
    int n = arr.size();
    int cn = 0,cz = 0,cp = 0;
    for(int i = 0;i<arr.size();i++){
        if(arr[i]<0) cn++;
        else if(arr[i] == 0) cz++;
        else cp++;
    }
    if(cn == 0){
        if(cz>0) return 0;
        else{
            int min = INT_MAX;
            for(int x:arr){
                if(x<min) min = x;
            }
                return min;
        }
    }else{
        if((cn%2)!=0){
            int mult = 1;
            for(int x : arr){
                mult*=x;
            }
            return mult;
        }
        else{
            int maxn = INT_MIN;
            int pro = 1;
            for(int i = 0;i<n;i++){
                int neg;
                if(arr[i]<0){
                    neg = arr[i];
                }
                if(neg>maxn) maxn = neg;

            }
            for(int x :arr){
                if(x!=maxn) pro*=x;
            }
            return pro;
        }
    }
    return 0;
}
int main(){
    int arr[] = {1,0,2,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v(arr,arr+n);
    cout<<minProduct(v);
    return 0;
}