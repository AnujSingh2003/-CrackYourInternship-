
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            vector<int>level;
            int s=q.size();
            for(int i=0;i<s;i++){
                auto it=q.front();
                q.pop();
                if(it->left!=NULL)q.push(it->left);
                if(it->right!=NULL)q.push(it->right);
                level.push_back(it->val);
            }
            ans.push_back(level);
        } 
        return ans;
            }
};