/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if (root == nullptr) return 0;

        int diameter = longest(root->right) + longest(root->left);
        int sub = max(diameterOfBinaryTree(root->right), diameterOfBinaryTree(root->left));
        return max(diameter, sub);
    }

    int longest(TreeNode* node) {
        if (node == nullptr) return 0;
        return max(longest(node->right), longest(node->left)) + 1;
    }
};
