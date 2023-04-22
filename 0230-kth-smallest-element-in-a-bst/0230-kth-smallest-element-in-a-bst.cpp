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

    void order(TreeNode* root,int&min, int &k){
        if(!root)
            return;

        order(root->left,min,k);
        
        k--;
        cout<<k<<" "<<root->val<<endl;
        if(k == 0){
            min = root->val;
            return;
        }
        order(root->right,min,k);
    }

    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        int min;
        order(root,min,k);
        return min;
    }
};