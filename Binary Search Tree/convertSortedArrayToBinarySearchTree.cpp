/*
Problem Link: https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/description/
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
    TreeNode *a_to_bst(vector<int> &nums, int l, int r)
    {
        if (l > r)
            return NULL;
        int mid = (l + r) / 2;
        TreeNode *root = new TreeNode(nums[mid]);
        TreeNode *left = a_to_bst(nums, l, mid - 1);
        TreeNode *right = a_to_bst(nums, mid + 1, r);
        root->left = left;
        root->right = right;
        return root;
    }

    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        int l = 0;
        int r = nums.size() - 1;
        TreeNode *root = a_to_bst(nums, l, r);
        return root;
    }
};