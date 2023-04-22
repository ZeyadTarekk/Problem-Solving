class Solution {
public:
    bool isSubsequence(string s, string t) {
        int  idx =0;
        if(s.length()>t.length()){
            return false;
        }
        if(s==t)
            return true;
        for(int i=0;i<t.length();i++){
            if(s[idx]==t[i]){
                idx++;
            }
            if(idx==s.length())
                return true;
        }
        return false;
    }
};