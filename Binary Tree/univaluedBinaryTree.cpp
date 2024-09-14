/*
Problem Link: https://leetcode.com/problems/univalued-binary-tree/
*/

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
class Solution
{
public:
    bool isUnivalTree(TreeNode *root)
    {
        queue<TreeNode *> q;
        q.push(root);
        int y = root->val;
        while (!q.empty())
        {
            TreeNode *x = q.front();
            q.pop();
            if (y != x->val)
                return false;
            if (x->left)
                q.push(x->left);
            if (x->right)
                q.push(x->right);
        }
        return true;
    }
};