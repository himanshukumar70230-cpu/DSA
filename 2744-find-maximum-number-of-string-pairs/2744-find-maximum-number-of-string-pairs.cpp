class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        int count = 0;
        unordered_set<string>s;
        for(int i = 0; i<words.size(); i++){
            string str = words[i];
            reverse(str.begin(),str.end());
            if(s.find(str)!=s.end()){
                count++;
                s.erase(str);
            }
            s.insert(words[i]);
        }
        return count;
    }
};