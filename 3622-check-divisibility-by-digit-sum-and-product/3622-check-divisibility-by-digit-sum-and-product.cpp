class Solution {
public:
int sumNumber(int n){
    int rem,sum = 0,product=1;
    
    while(n>0){
        rem = n%10;
        sum+=rem;
        product*=rem;
        n/=10;

    }
    int cal = sum+product;
    return cal;
}
    bool checkDivisibility(int n) {
        int sum = sumNumber(n);
        if((n%sum)==0) return true;
        return false;
    }
};