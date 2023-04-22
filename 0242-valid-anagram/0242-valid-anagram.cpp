class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        vector<int> fir(26,0);
        vector<int> sec(26,0);
        for(int i=0;i<s.length();i++){
            fir[(int)s[i] - 'a']++;
        }
        for(int i=0;i<t.length();i++){
            sec[(int)t[i] - 'a']++;
        }
        for(int i=0;i<26;i++){
            if(fir[i]!=sec[i])
                return false;
        }
        return true;
    }
};