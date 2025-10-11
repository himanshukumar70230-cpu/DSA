#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int> &a,vector<int> &b,vector<int> &c){
int i = 0;
int j =0;
int k = 0;
while(i<a.size() && j<b.size()){
    if(a[i]<b[j]){
        c[k] = a[i];
        i++;
        k++;
    }else{
        c[k] = b[j];
        j++;
        k++;
    }
}
if(i == a.size()){
    while(j<b.size()){
        c[k] = b[j];
        j++;
        k++;
    }
}
if(j== b.size()){
    while(i<a.size()){
        c[k] = a[i];
        i++;
        k++;
    }
}
}
void mergeSort(vector<int>&v){
    int n = v.size();
    if(n==1) return;
    int n1 = n/2;
    int n2 = n-n/2;
    vector<int>a(n1),b(n2);
    for(int i = 0;i<n1;i++){
        a[i] = v[i];
    }
    for(int j = 0;j<n2;j++){
        b[j] = v[j+n1];
    }
    mergeSort(a);
    mergeSort(b);
    merge(a,b,v);
}
int main(){
    int arr[] = {4,1,5,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>T(arr,arr+n);
    
     mergeSort(T);   
    for(int i = 0;i<T.size();i++){
        cout<<T[i]<<" ";
    }
    return 0;
}
