class Solution {
public:
bool check(vector<int>& weights, int days,int mid){
    int count  = 1;
    int m = mid;
    for(int i = 0; i<weights.size(); i++){
        if(m>=weights[i]){
            m-=weights[i];
        }else{
            count++;
            m = mid;
            m -=weights[i];
        }
    }
    if(count <= days) return true;
    return false;
}
    int shipWithinDays(vector<int>& weights, int days) {
        int ans;
        int lo = INT_MIN;
        int hi = 0;
        for(int i = 0;i<weights.size();i++){
            if(weights[i]>lo) lo = weights[i];
            hi+=weights[i];
        }
        cout<<lo<<" "<<hi<<endl;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            if(check(weights,days,mid) == true){
                ans = mid;
                hi = mid-1;
                }
            else lo = mid+1;
        }
        return ans;
    }
};