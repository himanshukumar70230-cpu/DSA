class Solution {
public:
int helper(vector<int>&nums,int i,vector<int>&dp){
    if(i == nums.size()-1) return nums[i];
    if(i == nums.size()-2) return max(nums[i],nums[i+1]);
    if(dp[i] !=-1) return dp[i]; 
    dp[i] = max(0+helper(nums,i+1,dp),nums[i]+helper(nums,i+2,dp));
    return dp[i];
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n,-1);
        return helper(nums,0,dp);
    }
};