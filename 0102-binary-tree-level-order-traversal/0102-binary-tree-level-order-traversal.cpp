/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    // void sol (TreeNode* root,vector<vector<int>>& ans, int level ){
    //     if(!root)
    //         return;
        
    //     if(ans.size() - 1<level || ans.size()==0){
    //         vector<int> currentLevel;
    //         currentLevel.push_back(root->val);
    //         ans.push_back(currentLevel);
    //     }else{
    //         ans[level].push_back(root->val);
    //     }
    //     sol(root->left,ans,level+1);
    //     sol(root->right,ans,level+1);
    // }

    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;

        // sol(root,ans,0);
        if(!root)
            return ans;


        queue<TreeNode*> level;

        level.push(root);
        while(!level.empty()){
            int size = level.size();
            vector<int>curlevel(size);
            for(int i=0;i<size;i++){
                TreeNode* el = level.front();
                level.pop();
                curlevel[i] = el->val;
                if(el->left) level.push(el->left);
                if(el->right) level.push(el->right);
            }
            ans.push_back(curlevel);
            
        }


        return ans;
    }
};