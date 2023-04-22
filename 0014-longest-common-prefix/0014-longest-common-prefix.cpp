class Solution {
public:
   string longestCommonPrefix(vector<string>& strs) {


       int l=0;
        for(int i=0;i<strs[0].length();i++){
            bool stat = true;
            for(int j=0;j<strs.size();j++){
                if(l >= strs[j].length() || strs[0][l]!=strs[j][l]){
                    stat=false;
                    break;
                }
            }
            if(stat){
                l++;
            }else {
                break;
            }
        }
        return strs[0].substr(0,l);


        
    }
};