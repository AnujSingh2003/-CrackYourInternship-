class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        sum = 0;
        dfs(root);
        return sum;
    }
    
private:
    int sum;

    void dfs(TreeNode* node) {
        if (node == nullptr) {
            return;
        }

        // Check if the left node exists and is a leaf
        if (node->left != nullptr && node->left->left == nullptr && node->left->right == nullptr) {
            sum += node->left->val;
        }

        // Recur for the left and right children
        dfs(node->left);
        dfs(node->right);
    }
};
