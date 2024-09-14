/*
Problem Link: https://leetcode.com/problems/binary-tree-tilt/description/
*/

class Solution
{
public:
    int sum = 0;
    int tilt_sum(TreeNode *root)
    {
        if (root == NULL)
            return 0;
        int l = tilt_sum(root->left);
        int r = tilt_sum(root->right);
        sum += abs(l - r);
        return l + r + root->val;
    }
    int findTilt(TreeNode *root)
    {
        int x = tilt_sum(root);
        return sum;
    }
};