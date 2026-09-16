class Solution {
public:
int reverse(int n){
    int rev = 0,rem;
    while(n>0){
        rem = n%10;
        rev = rev*10+rem;
        n/=10;
    }
    return rev;
}
    int countNicePairs(vector<int>& nums) {
       int n = nums.size();
        int count = 0;
        unordered_map<int,int>m;
        for(int i = 0;i<n;i++){
           int diff = nums[i] -reverse(nums[i]);
           if(m.find(diff)!=m.end()){
             count = count%1000000007;
            count+=m[diff];
         
           }
           
             m[diff]++;
           
        }
        return count%1000000007;;
    }
};