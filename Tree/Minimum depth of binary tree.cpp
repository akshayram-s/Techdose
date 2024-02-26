class Solution {
public:
    int minDepth(TreeNode* root) {
        if(!root)
            return 0;
        if(!root->left && !root->right)
            return 1;
        if(!root->left)
            return 1+minDepth(root->right);
        if(!root->right)
            return 1+minDepth(root->left);
        int lDepth=minDepth(root->left)+1;
        int rDepth=minDepth(root->right)+1;
        return min(lDepth,rDepth);
    }
};