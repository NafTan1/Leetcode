/*
Problem Link: https://leetcode.com/problems/minimum-absolute-difference-in-bst/description/
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
    void traverse(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
            return;
        traverse(root->left, v);
        v.push_back(root->val);
        traverse(root->right, v);
    }
    int getMinimumDifference(TreeNode *root)
    {
        vector<int> v;
        traverse(root, v);
        // sort(v.begin(),v.end());
        int mn = INT_MAX;
        for (int i = 0; i < v.size() - 1; i++)
        {
            int d = v[i + 1] - v[i];
            mn = min(mn, d);
        }
        return mn;
    }
};