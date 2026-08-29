class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.length();
        int i = 0,j= 0;
        int minW = INT_MAX;
        int cW = 0,cB = 0;
       for(int j = 0;j<n;j++){
        if(blocks[j]=='W')cW++;
        
        if((j-i+1)>k){
         
            if(blocks[i] == 'W') cW--;
            i++;
        }
         if((j-i+1)==k){
            minW = min(minW,cW);
        }
       }
        return minW;
    }
};