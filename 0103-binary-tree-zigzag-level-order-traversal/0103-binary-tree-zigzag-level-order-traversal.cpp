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

    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> ans;

        // sol(root,ans,0);
        if(!root)
            return ans;

        bool state = true;


        queue<TreeNode*> level;

        level.push(root);
        while(!level.empty()){
            int size = level.size();
            vector<int>curlevel(size);
            for(int i=0;i<size;i++){
                TreeNode* el = level.front();
                level.pop();
                if(state){
                curlevel[i] = el->val;

                }else {
                curlevel[size - 1 - i] = el->val;

                }
                if(el->left) level.push(el->left);
                if(el->right) level.push(el->right);
            }
            ans.push_back(curlevel);
            state = !state;
            
        }


        return ans;
    }
};