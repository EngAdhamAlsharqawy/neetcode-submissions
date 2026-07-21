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
    int kthSmallest(TreeNode* root, int k) {
        return morrisTraversal(root, k)->val;
    }

    TreeNode* morrisTraversal(TreeNode* root, int k) {
        TreeNode* kth{};
        for (TreeNode* cur = root; cur;) {
            if (cur->left) {
                TreeNode* predecessor = cur->left;
                while (predecessor->right && predecessor->right != cur)
                    predecessor = predecessor->right;
                if (!predecessor->right) {
                    predecessor->right = cur;
                    cur = cur->left;
                    continue;
                }
                else
                    predecessor->right = nullptr;
            }
            if (!--k)
                kth = cur;
            cur = cur->right;
        }
        return kth;
    }
};