class Solution {
public:
    int h=0;
    void inorder(TreeNode* root){
        if(!root)
            return;
        inorder(root->left);
        h++;
        inorder(root->right);
    }
    int countNodes(TreeNode* root) {
        inorder(root);
        return h;
    }
};