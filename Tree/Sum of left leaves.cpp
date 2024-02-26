class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root)
            return 0;
        int sum=0;
        if(root->left and !root->left->left and !root->left->right)
            sum+=root->left->val;
        return sum+sumOfLeftLeaves(root->left)+sumOfLeftLeaves(root->right);
    }
};