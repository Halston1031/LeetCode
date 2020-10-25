/*
 * @lc app=leetcode id=938 lang=cpp
 *
 * [938] Range Sum of BST
 */

// @lc code=start

//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    int rangeSumBST(TreeNode* root, int L, int R) {
        if(root == NULL) return 0;
        int ans = 0;
        if(L <= root->val && root->val <= R) ans+=root->val;
        if(root->val <= R) ans += rangeSumBST(root->right, L, R);
        if(L <= root->val) ans += rangeSumBST(root->left, L, R);
        return ans;
    }
};
// @lc code=end

