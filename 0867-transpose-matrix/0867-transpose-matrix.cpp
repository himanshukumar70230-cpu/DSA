class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int m = matrix.size(); //NO OF ROWS
        int n = matrix[0].size(); //NO OF COLOUMNS
        vector<vector<int>>result(n,vector<int>(m));
        for(int i = 0;i< n; i++){
            
            for(int j = 0;j<m; j++){
                result[i][j] = matrix[j][i];
            }
            
        }
        return result;
    }
};