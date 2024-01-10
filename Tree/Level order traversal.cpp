class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root){
            return ans;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            vector<int>temp;
            for(int i=0;i<size;i++){
                TreeNode *curr=q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left!=NULL) 
                    q.push(curr->left);
                if(curr->right!=NULL) 
                    q.push(curr->right);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
