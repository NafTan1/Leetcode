/*
Problem Link: https://leetcode.com/problems/increasing-order-search-tree/
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
    TreeNode *r = NULL;
    void insert(TreeNode *&r, int x)
    {
        if (r == NULL)
        {
            r = new TreeNode(x);
        }
        else
        {
            r->left = NULL;
            if (r->right == NULL)
                r->right = new TreeNode(x);
            else
                insert(r->right, x);
        }
    }
    TreeNode *increasingBST(TreeNode *root)
    {
        if (root == NULL)
            return NULL;
        TreeNode *l = increasingBST(root->left);
        insert(r, root->val);
        TreeNode *z = increasingBST(root->right);
        return r;
    }
};