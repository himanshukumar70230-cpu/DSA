class Solution {
public:
    void reverseA(vector<int>&arr,int st,int ed){
        while(st<=ed){
            int temp = arr[st];
            arr[st] = arr[ed];
            arr[ed] = temp;
            st++;
            ed--; 
        }

    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverseA(nums,0,n-k-1);
        reverseA(nums,n-k,n-1);
        reverseA(nums,0,n-1);
    }
};