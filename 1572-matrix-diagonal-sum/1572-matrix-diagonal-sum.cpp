class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum =0;
        int matSize = mat.size();
        int middle = matSize/2;
        for(int i=0;i<mat.size();i++){
            sum+=mat[i][i];
            
        }
        int fir =0;
        
        for(int i = mat.size() - 1;i>=0;i--){
            if(fir!=i)
                sum+=mat[fir][i];
            fir++;
        }
        return sum;
    }
};