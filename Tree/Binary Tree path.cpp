class Solution {
public:
    void paths(TreeNode* root,vector<string>& res,string s){
        if(!root)
            return;
        if(!root->left && !root->right){
            s=s+"->"+to_string(root->val);
            res.push_back(s);
        }
        s=s+"->"+to_string(root->val);
        paths(root->left,res,s);
        paths(root->right,res,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>res;
        string s=to_string(root->val);
        if(!root->left && !root->right){
            res.push_back(to_string(root->val));
        }
        paths(root->left,res,s);
        paths(root->right,res,s);
        return res;
    }
};