class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int beginrow = 0;
        int endrow = matrix.size() - 1;
        int neededRow = -1;
        while(beginrow<=endrow){
            int mid = beginrow + (endrow - beginrow)/2;
            if(target>=matrix[mid][0] && target<=matrix[mid][matrix[mid].size()-1]){
                neededRow = mid;
                break;
            } else if(target<matrix[mid][0]){
                endrow = mid - 1;

            }else if(target>matrix[mid][matrix[mid].size()-1]){
                beginrow= mid +1;
            }
        }
        if(neededRow == -1)
            return false;
        
        int start = 0;
        int end = matrix[neededRow].size()-1;
        while(start <=end){
            int mid2 = start + (end - start)/2;
            if(target == matrix[neededRow][mid2])
                return true;
            else if (target < matrix[neededRow][mid2]){
                end = mid2 - 1;
            }else 
                start = mid2 +1;
        }
        return false;
    }
};