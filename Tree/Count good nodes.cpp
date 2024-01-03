class Solution {
public:
    int ans=0;
    void dfs(TreeNode* root,int maxx){
        if(!root)
        return;
        if(root->val>=maxx)
        ans++;
        maxx=max(root->val,maxx);
        dfs(root->left,maxx);
        dfs(root->right,maxx);
    }
    int goodNodes(TreeNode* root) {
        int maxx=root->val;
        dfs(root,maxx);
        return ans;
    }
};