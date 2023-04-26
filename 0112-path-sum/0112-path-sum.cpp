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
    void sum(TreeNode* root, int targetSum, int& cur,bool &status){
        if(!root){
            status = false;
            return;
        }
        // cout<<targetSum<<" "<<root->val<<" "<<cur<<endl;
        cur+=root->val;
        if(!root->left&& !root->right && cur==targetSum){
            status = true;
            return;
        }
        if(root->left){
            
            sum(root->left,targetSum,cur,status);
            cur -= root->left->val;
        }
        if(root->right){
            sum(root->right,targetSum,cur,status);    
            cur -= root->right->val;
        }
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        bool st = false;
        int cur =0;
        sum(root,targetSum,cur,st);
        return st;
    }
};