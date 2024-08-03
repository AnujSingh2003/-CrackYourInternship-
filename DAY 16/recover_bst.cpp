#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void recoverTree(TreeNode* root) {
        TreeNode* first = nullptr;
        TreeNode* second = nullptr;
        TreeNode* prev = nullptr;

        // Helper function to perform in-order traversal and find the two nodes
        function<void(TreeNode*)> inorder = [&](TreeNode* node) {
            if (!node) return;
            inorder(node->left);

            // Detect swapped nodes
            if (prev && prev->val > node->val) {
                if (!first) {
                    first = prev;
                }
                second = node;
            }
            prev = node;

            inorder(node->right);
        };

        inorder(root);

        // Swap the values of the two nodes to correct the BST
        if (first && second) {
            swap(first->val, second->val);
        }
    }
};

// Helper function to print the tree in-order (for testing)
void inorderPrint(TreeNode* root) {
    if (!root) return;
    inorderPrint(root->left);
    cout << root->val << " ";
    inorderPrint(root->right);
}

int main() {
    // Example: Create a BST with swapped nodes
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(1);
    root->right = new TreeNode(4);
    root->right->left = new TreeNode(2);

    cout << "Original tree (with swapped nodes): ";
    inorderPrint(root);
    cout << endl;

    // Recover the BST
    Solution().recoverTree(root);

    cout << "Recovered tree: ";
    inorderPrint(root);
    cout << endl;

    return 0;
}
