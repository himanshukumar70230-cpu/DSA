class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int idx;
        for(int i = 0;i<nums.size();i++){
            int s = target-nums[i];
            if(m.find(s)!=m.end()){
                return {i,m[s]};
            }else m.insert({nums[i],i});
        }
        return {-1,-1};
    }
};