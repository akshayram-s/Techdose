/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    unordered_map<TreeNode*, bool> vis;
    unordered_map<TreeNode*, TreeNode*> parent;
    vector<int> ans;

    void makeParent(TreeNode* node, TreeNode* prev){
        if(node == NULL) 
            return;
        parent[node] = prev;
        makeParent(node->left, node);
        makeParent(node->right, node);
    }

    void solve(TreeNode* node, int k, int dist){
        if(node == NULL || vis[node] == 1) 
            return;
        vis[node] = 1;
        if(dist == k){
            ans.push_back(node->val);
            return;
        }
        solve(node->left, k, dist+1);
        solve(node->right, k, dist+1);
        solve(parent[node], k, dist+1);
    }

    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        makeParent(root, NULL);
        solve(target, k, 0);
        return ans;
    }
};