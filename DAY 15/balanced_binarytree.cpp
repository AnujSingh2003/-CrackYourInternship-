class Solution {
public:
    bool isBalanced(TreeNode* root) {
        if (root == nullptr) {
            return true; // An empty tree is considered balanced
        }

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        return abs(leftHeight - rightHeight) <= 1 && isBalanced(root->left) && isBalanced(root->right);   

    }

private:
    int height(TreeNode*   
 node) {
        if (node == nullptr) {
            return 0;
        }

        return 1 + max(height(node->left), height(node->right));
    }
};