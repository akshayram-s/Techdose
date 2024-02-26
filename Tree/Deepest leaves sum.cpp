class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        if(!root)
            return 0;
        queue<TreeNode*>q;
        q.push(root);
        int sum=0;
        while(!q.empty()){
            sum=0;
            int s=q.size();
            for(int i=0;i<s;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left)
                    q.push(curr->left);
                if(curr->right)
                    q.push(curr->right);
                sum+=curr->val;
            }
        }
        return sum;
    }
};