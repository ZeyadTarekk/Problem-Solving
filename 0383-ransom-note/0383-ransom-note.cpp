class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> fir(26,0);
        vector<int> sec(26,0);
        // unordered_map<char,int> sec;
        
         for(int i=0;i<magazine.length();i++){
                sec[(int)magazine[i] - 'a']++;
        }

        for(int i=0;i<ransomNote.length();i++){
                fir[(int)ransomNote[i] - 'a']++;
        }
       
        for(int i=0;i<fir.size();i++){
            if(fir[i] > sec[i])
                return false;
        }

        return true;
    }
};