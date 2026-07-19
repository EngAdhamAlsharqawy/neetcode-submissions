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
    int counter{};
    TreeNode* kth{};
public:
    int kthSmallest(TreeNode* root, int k) {
        counter = k;
        dfs(root);
        return kth->val;
    }

    void dfs(TreeNode* root) {
        if (!root || !counter)
            return;
        dfs(root->left);
        if (kth)
            return;
        if (!--counter) {
            kth = root;
            return;
        }
        dfs(root->right);
    }
};