class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map <char,char> ans1;
        map<char,char> ans2;

        for(int i=0;i<s.length();i++){

            if(!ans1[s[i]] && ! ans2[t[i]]){
                ans1[s[i]] = t[i];
                ans2[t[i]] = s[i];
            } else if(!(ans1[s[i]]== t[i] && ans2[t[i]]==s[i]))
            // make sure 1 to 1 mapping
                return false;
            
           
        }
        return true;
        
    }
};