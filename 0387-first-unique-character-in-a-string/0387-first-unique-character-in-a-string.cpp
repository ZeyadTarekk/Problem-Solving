class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> ans(26,0);
        for(int i=0;i<s.size();i++){
            ans[s[i] - (int)'a']++;
        }
        for(int i=0;i<s.size();i++){
            if(ans[s[i] - (int)'a'] == 1)
                return i; 
        }
        return -1;
    }
};