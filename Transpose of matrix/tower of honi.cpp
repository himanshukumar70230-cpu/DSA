#include <iostream>
using namespace std;
void honi(int n,char a,char b,char c){
    if(n==0) return;
    honi(n-1,a,c,b);
    cout<<"Move disk "<<n<<"from rod "<<a<<"to rod"<<c<<endl;
    honi(n-1,b,a,c);
    
}
int main() {
	// your code goes here
    int n;
    cout<<"Enter number of disk";
    cin>>n;
    honi(n,'a','b','c');
	return 0;
}