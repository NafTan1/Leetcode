/*
Problem Link: https://leetcode.com/problems/range-sum-of-bst/description/
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
    int sum = 0;
    void search(TreeNode *root, int low, int high)
    {
        if (root == NULL)
            return;
        if (root->val >= low && root->val <= high)
        {
            sum += root->val;
        }
        if (low <= root->val)
            search(root->left, low, high);
        if (high >= root->val)
            search(root->right, low, high);
    }
    int rangeSumBST(TreeNode *root, int low, int high)
    {
        search(root, low, high);
        return sum;
    }
};