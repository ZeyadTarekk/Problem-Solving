class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            ans.push_back(vector<int>(i+1,1));
            if(i+1>2){
                for(int j=1;j<i;j++){
                    ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
                }
            }
        }

        return ans;
    }
};