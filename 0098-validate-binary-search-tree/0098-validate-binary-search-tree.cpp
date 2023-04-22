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

    bool valid(TreeNode* root, long long max, long long min){
        if(!root)
            return true;
        if(root->val >= max || root->val <= min) return false;
    
        return valid(root->left, root->val,min) && valid(root->right, max, root->val);
    }
    bool isValidBST(TreeNode* root) {
        return valid(root,LLONG_MAX,LLONG_MIN);
    }
};