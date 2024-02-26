class Solution {
public:
    vector<int> largestValues(TreeNode* root) {
        vector<int>res;
        if(!root)
            return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int maxi=INT_MIN;
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                maxi=max(maxi,curr->val);
            }
            res.push_back(maxi);
        }
        return res;
    }
};