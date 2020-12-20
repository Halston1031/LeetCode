/*
 * @lc app=leetcode.cn id=938 lang=cpp
 *
 * [938] Range Sum of BST
 */

// @lc code=start
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
    void dfs(TreeNode *root, int l, int r)
    {
        int val = root->val;
        if (val >= l && val <= r)
            sum += val;
        if (root->left)
            dfs(root->left, l, r);
        if (root->right)
            dfs(root->right, l, r);
    }

    int rangeSumBST(TreeNode *root, int L, int R)
    {
        std::ios_base::sync_with_stdio(0);
        std::cin.tie(nullptr);
        dfs(root, L, R);
        /*if(root == nullptr){
            return 0;
        }
        
        int nval = 0;
        if(root->val >= L && root->val <= R)
            nval = root->val;
        
        return nval + rangeSumBST(root->left, L, R) + rangeSumBST(root->right, L, R);*/
        root->left = nullptr;
        root->right = nullptr;

        return sum;
    }
};
// @lc code=end
