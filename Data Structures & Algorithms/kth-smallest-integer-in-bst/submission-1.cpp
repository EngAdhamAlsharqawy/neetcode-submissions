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
    int kth{};
    int counter{};
public:
    int kthSmallest(TreeNode* root, int k) {
        counter = k;
        dfs(root);
        return kth;
    }

    void dfs(TreeNode* root) {
        if (!root)
            return;
        dfs(root->left);
        if (!--counter) {
            kth = root->val;
            return;
        }
        dfs(root->right);
    }
};