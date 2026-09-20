class Solution {
public:
    int reverseDegree(string s) {
        int sum = 0;
        unordered_map<char,int>map;

        for(int i = 0;i<s.length();i++){
            sum+=(123-s[i])*(i+1);

        }
        return sum;
    }
};