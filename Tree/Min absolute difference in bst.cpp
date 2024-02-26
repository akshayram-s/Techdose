class Solution {
public:
    void inorder(TreeNode* root,vector<int>& vec){
        if(!root)
            return;
        inorder(root->left,vec);
        vec.push_back(root->val);
        inorder(root->right,vec);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>vec;
        inorder(root,vec);
        sort(vec.begin(),vec.end());
        int mini=vec[1]-vec[0];
        for(int i=2;i<vec.size();i++){
            mini=min(mini,vec[i]-vec[i-1]);
        }
        return mini;
    }
};