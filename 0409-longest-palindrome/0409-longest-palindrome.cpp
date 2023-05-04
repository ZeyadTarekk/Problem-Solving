class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> freq;
        for(int i=0;i<s.length();i++){
            if(freq.find(s[i])==freq.end())
                freq[s[i]]=1;
            else 
                freq[s[i]]++;
        }

        int length =0;
        bool middle = false;
        for(auto x:freq){
            length+=x.second/2*2;
            if(x.second%2 == 1)
                middle = true;
        }

        
        
        if(middle)
            return length+1;
        return length;

    }
};