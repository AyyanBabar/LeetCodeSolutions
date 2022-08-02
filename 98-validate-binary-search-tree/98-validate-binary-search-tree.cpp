/**
 *Definition for a binary tree node.
 *struct TreeNode {
 *   int val;
 *   TreeNode * left;
 *   TreeNode * right;
 *   TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *   TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *   TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 *};
 */
class Solution
{
    public:
        bool isValidBST2(TreeNode *root, long ma = LONG_MAX, long mi = LONG_MIN)
        {
            if (!root)
                return true;
            if ((root->val >= ma || root->val <= mi))
                return false;
            if (root->left && root->left->val >= root->val)
                return false;
            if (root->right && root->right->val <= root->val)
                return false;
            return isValidBST2(root->left, root->val, mi) && isValidBST(root->right, ma, root->val);
        }
    bool isValidBST(TreeNode *root, long ma = LONG_MAX, long mi = LONG_MIN)
    {
        if (!root)
            return true;
        if ((root->val >= ma || root->val <= mi))
                return false;
        if (root->left && root->left->val >= root->val)
            return false;
        if (root->right && root->right->val <= root->val)
            return false;
        return isValidBST(root->left, root->val, mi) && isValidBST(root->right, ma, root->val);
    }
};