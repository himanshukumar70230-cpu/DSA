class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>v;
      unordered_map<int,int>m;
      for(int i = 0;i<nums.size();i++){
             int diff = target-nums[i];
        if(m.find(diff)!=m.end()){
            v.push_back(i);
            v.push_back(m[diff]);
        }else{
            m[nums[i]] = i;
        }
      }
      sort(v.begin(),v.end());
      return v;  
    }
};