/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>ans;
        if(!root)
            return ans;
        queue<Node*> sol;
        sol.push(root);
        while(!sol.empty()){
            int size = sol.size();
            
            vector<int>level(size);
            for(int i=0;i<size;i++){
                Node* cur = sol.front();
                sol.pop();
                level[i] = cur->val;
                for(int j=0;j<cur->children.size();j++){
                    sol.push(cur->children[j]);
                }
            }
            ans.push_back(level);
            
        }
        return ans;
    }
};