class Solution {
public:
    int height(TreeNode* root){
        if(!root)
            return 0;
        return 1+max(height(root->left),height(root->right));
    }
    bool isBalanced(TreeNode* root) {
        if(!root)
            return true;
        int bal=height(root->left)-height(root->right);
        if(bal>1 or bal<-1)
            return false;
        if(!isBalanced(root->left) || !isBalanced(root->right))
            return false;

        return true;
    }
};