class Solution {
public:
int reverse(int n){
    int rem = 0, rev = 0;
    while(n>0){
        rem = n%10;
        rev = rev*10+rem;
        n = n/10;
    }
    return rev;
}
    int countDistinctIntegers(vector<int>& nums) {
       unordered_set<int>s;
       for(int  i = 0; i<nums.size(); i++){
        s.insert(nums[i]);
        int rev = reverse(nums[i]);
        s.insert(rev);
       }
       return s.size(); 
    }
};