/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if (!root)
            return true;
        queue<tuple<TreeNode*, TreeNode*, TreeNode*>> bfs;
        bfs.push(make_tuple(root, nullptr, nullptr));
        while (!bfs.empty()) {
            auto [cur, low, high] = bfs.front();
            bfs.pop();
            if ((low && cur->val <= low->val) || (high && high->val <= cur->val))
                return false;
            if (cur->left)
                bfs.push(make_tuple(cur->left, low, cur));
            if (cur->right)
                bfs.push(make_tuple(cur->right, cur, high));
        }
        return true;
    }
};