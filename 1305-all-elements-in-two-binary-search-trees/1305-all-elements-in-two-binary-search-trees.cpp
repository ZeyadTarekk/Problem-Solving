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

    void order(TreeNode* root, vector<int>&ans){
        if(!root)
            return;
        order(root->left,ans);
        ans.push_back(root->val);
        order(root->right,ans);
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1,ans2;
        order(root1,ans1);
        order(root2,ans2);
        vector<int> newAns(ans1.size()+ans2.size());
        int firstIndex=0,secIdx=0;
        ans1.push_back(INT_MAX);
        ans2.push_back(INT_MAX);
        for(int i = 0;i<newAns.size();i++){
            if(ans1[firstIndex]<ans2[secIdx]){
                newAns[i] = ans1[firstIndex];
                firstIndex++;
            }else {
                newAns[i] = ans2[secIdx];
                secIdx++;
            }
        }
        return newAns;
    }
};