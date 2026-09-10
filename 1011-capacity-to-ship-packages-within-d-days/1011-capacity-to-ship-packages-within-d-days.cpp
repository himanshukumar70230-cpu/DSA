class Solution {
public:
bool helper(vector<int>& arr,int days,int mc){
    int n = arr.size();
    int r = mc;
    int cDays = 1;
    for(int i = 0;i<n;i++){
        if(r>=arr[i]){
            r-=arr[i];
        }else{
            cDays++;
            r = mc;
            r-=arr[i];
        }
    }
    
  
    if(cDays>days) return false;
    return true;

}
    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        int minCapacity = INT_MIN;
        int maxCapacity = 0;
        for(int i = 0;i<n;i++){
            if(weights[i]>minCapacity) minCapacity = weights[i];
            maxCapacity+=weights[i];
        }
        int lo = minCapacity;
        int hi = maxCapacity;
        int ans = 0;
        while(lo<=hi){
            int mid = lo +(hi-lo)/2;
            if(helper(weights,days,mid) == true){
                ans = mid;
                hi = mid-1;
            }else lo = mid+1;
        }
        return ans;
    }
};