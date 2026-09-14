class Solution {
public:
    bool isAnagram(string s, string t) {
    if(s.size()!=t.size()) return false;
      unordered_map<char,int>s1;
      unordered_map<char,int>t1;
      for(int i = 0;i<s.size();i++){
        s1[s[i]]++;
        t1[t[i]]++;
      }
    int k = 0;
    while(k<s.size()){
        if(t1.find(s[k])!=t1.end()){
            if(t1[s[k]]!=s1[s[k]]) return false;
            else{
                k++;
            }
        }else return false;
    }
    return true;
    }
};