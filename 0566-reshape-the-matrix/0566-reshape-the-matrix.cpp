class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r,vector<int>(c));
        int idx1=0,idx2=0;
        int m = mat.size();
        int n = mat[0].size();
        if(r*c != m*n)
            return mat;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                ans[idx1][idx2] = mat[i][j];
                idx2++;
                if(idx2==c){
                    idx1++;
                    idx2=0;
                }
            }
        }
        return ans;
    }
};