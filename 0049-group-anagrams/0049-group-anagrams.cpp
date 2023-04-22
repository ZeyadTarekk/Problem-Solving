class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> ans;
        for(int i=0;i<strs.size();i++){
            string n = strs[i];
            sort(n.begin(),n.end());
            // vector<string> vec = map[]
            // cout<<n<<endl;
            ans[n].push_back(strs[i]);
        }

        vector<vector<string>> ansVec;
        std::map<string, vector<string>>::iterator it = ans.begin();
 
        
        for(auto i:ans){
            ansVec.push_back(i.second);
        }



        return ansVec;

    }
};