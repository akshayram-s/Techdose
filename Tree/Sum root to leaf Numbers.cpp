class Solution {
public:
    int sumNumbers(TreeNode* root,string s="") {
        if(!root)
            return 0;
        s+=to_string(root->val);
        if(!root->left && !root->right)
            return stoi(s);
        int res1=sumNumbers(root->left,s);
        int res2=sumNumbers(root->right,s);
        return res1+res2;
    }
};