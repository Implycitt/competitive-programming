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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (subRoot == nullptr) return true;
        if (root == nullptr) return false;

        if (isEqual(root, subRoot)) {
            return true;
        }

        if (isSubtree(root->right, subRoot) || isSubtree(root->left, subRoot)) {
            return true;
        }

        return false;
    }

    bool isEqual(TreeNode* a, TreeNode* b) {
        if (a == nullptr && b == nullptr) {
            return true;
        }
        
        if (a != nullptr && b != nullptr && a->val == b->val) {
            return (isEqual(a->left, b->left) && isEqual(a->right, b->right));
        }
        return false;
    }
};