class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        vector<int>mul(101);
          int find;
        for(int i = 0;i<=100;i++){
            int idx = i+1;
            mul[i]=k*idx;
        }
    unordered_map<int,int>m;
        for(int i= 0;i<nums.size();i++){
            m[nums[i]]++;
        }
        
        int i = 0;
        // int find;
        while(i<=100){
         if(m.find(mul[i])!=m.end()) i++;
         else{
            find = mul[i];
            break;
         } 
        }
        return find;
    }
};