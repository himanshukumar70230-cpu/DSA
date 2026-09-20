class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m = matrix.size();
        int n = matrix[0].size();
        int d = 0;
        int l = n-1;

         bool flag = false;
        while(d<m && l>=0){
            if(matrix[d][l] == target){
                flag = true;
                return flag;
            }
            else if(matrix[d][l]<target) d++;
            else l--;
        }
        return flag;
    }
};