class Solution {
public:
    void path(TreeNode* root,int targetSum,int sum,vector<int>vec,vector<vector<int>>& res){
        if(!root)
            return;
        sum+=root->val;
        vec.push_back(root->val);
        if(sum==targetSum && !root->left && !root->right){
            res.push_back(vec);
        }
        path(root->left,targetSum,sum,vec,res);
        path(root->right,targetSum,sum,vec,res);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>>res;
        vector<int>vec;
        path(root,targetSum,0,vec,res);
        return res;
    }
};