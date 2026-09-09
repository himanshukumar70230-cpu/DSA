class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo = 0;
        int hi = num;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            long long m = mid;
            if((m*m) == num) return true;
            else if((m*m)>num) hi = mid-1;
            else lo = mid+1;
        }
        return false;
    }
};