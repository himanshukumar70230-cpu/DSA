class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
     int n = nums.size();
     int i = 0;
     int j = 0;
     int preSum = 0;
     int len,minLen = INT_MAX;
     while(j<n){
        preSum+=nums[j];
       while(preSum>=target){
        len = j-i+1;
        minLen = min(minLen,len);
        preSum-=nums[i];
        i++;
        
       }
        j++;
     }
     cout<<minLen;
     if(minLen != INT_MAX) return minLen;
      return 0;   
    }
};