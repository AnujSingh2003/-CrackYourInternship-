class BSTIterator {
public:
stack<TreeNode*>st;
    BSTIterator(TreeNode* root) {
        partialInorder(root);
    }
    void partialInorder(TreeNode* root){
        while(root!=NULL){
            st.push(root);
            root=root->left;
        }
    }
    
    int next() {
        TreeNode* top=st.top();
        st.pop();
        partialInorder(top->right);
        return top->val;
    }
    
    bool hasNext() {
      return !st.empty();
       
    }
};