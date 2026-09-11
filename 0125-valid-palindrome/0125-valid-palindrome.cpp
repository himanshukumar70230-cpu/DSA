class Solution {
public:
    bool isPalindrome(string s) {
       string str = "";
       for(int i = 0;i<s.size();i++){
        s[i] = tolower(s[i]);
        if(s[i]>=97 && s[i]<=122 || s[i]>=48 && s[i]<= 57){
            str+=s[i];
        }
       }
       string rStr = str;
       reverse(str.begin(),str.end());
       return (str == rStr); 
    }
};