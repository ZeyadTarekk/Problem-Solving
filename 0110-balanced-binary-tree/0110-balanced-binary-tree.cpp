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
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        int rightHeight = getHeight(root->right);
        int leftHeight = getHeight(root->left);
        cout<<rightHeight<<" "<<leftHeight;
        if(abs(rightHeight - leftHeight)>1 || rightHeight==-1||leftHeight==-1 )
            return false;
        return true;
    }

    int getHeight(TreeNode* root){
        if(!root)
            return 0;

        int leftHeight = getHeight(root->left);
        int rightHeight = getHeight(root->right);
        if(abs(rightHeight - leftHeight)>1 || rightHeight==-1||leftHeight==-1)
            return -1;

        return 1 + max(getHeight(root->left),getHeight(root->right));
    }
};