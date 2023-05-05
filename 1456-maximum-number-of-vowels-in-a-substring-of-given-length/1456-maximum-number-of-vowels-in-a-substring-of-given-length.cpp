
class Solution {
public:
    bool isVowel(char c){
        if( c == 'a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true;
        }
        return false;
    }
    
    int maxVowels(string s, int k) {
        int no=0;
        int cur=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i]))
                cur++;
        }
        no = max(no,cur);
        if(k == s.length())
            return no;
        int begin = 0;
        for(int i=k;i<s.length();i++){
            if(isVowel(s[begin]))
                cur--;
            if(isVowel(s[i]))
                cur++;
            begin++;
            no = max(no,cur);
        }
        return no;
    }
};