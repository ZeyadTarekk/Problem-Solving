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
    void level(TreeNode* root,unordered_set<int>& vec){
        if(!root)
            return;
        vec.insert(root->val);
        level(root->left,vec);
        level(root->right,vec);
    }
    bool findTarget(TreeNode* root, int k) {
        unordered_set<int> trav;
        level(root,trav);
        for(auto el:trav){
            if(trav.find(k - el)!=trav.end() && k - el != el)
                return true;
        }   
        
        return false;
    }
};