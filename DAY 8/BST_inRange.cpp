class Solution{
public:
void inorder(Node* root,vector<int>&ans){
    if(root==NULL)return;
    inorder(root->left,ans);
    ans.push_back(root->data);
    inorder(root->right,ans);
}
    int getCount(Node *root, int l, int h)
    {
     vector<int>ans;
     inorder(root,ans);
     int count=0;
     for(int i=0;i<ans.size();i++){
         if(ans[i]>=l&&ans[i]<=h)count++;
     }
     return count;
    }
};
