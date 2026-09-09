class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int maxElement = INT_MIN;
        int idx = -1;
        for(int i = 0;i<arr.size();i++){
            if(arr[i]>maxElement){
             maxElement = arr[i];
             idx = i;

            }
        }
        return idx;
    }
};