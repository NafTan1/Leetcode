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
    void find(TreeNode *root, vector<int> &v)
    {
        if (root == NULL)
            return;
        find(root->left, v);
        v.push_back(root->val);
        find(root->right, v);
    }
    bool findTarget(TreeNode *root, int k)
    {
        vector<int> v;
        find(root, v);
        int l = 0;
        int r = v.size() - 1;
        while (l < r)
        {
            int x = v[l] + v[r];
            if (x == k)
            {
                return true;
            }
            else if (x < k)
            {
                l++;
            }
            else
                r--;
        }
        return false;
    }
};