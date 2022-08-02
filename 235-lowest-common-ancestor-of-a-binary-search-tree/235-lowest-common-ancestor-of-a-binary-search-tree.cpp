/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        TreeNode* last_common=root;
        TreeNode *l=root,*r=root;
        while(l==r){
            last_common=l;
            if(l->val>p->val)
                l=l->left;
            else if(l->val<p->val)
                l=l->right;
            if(r->val>q->val)
                r=r->left;
            else if(r->val<q->val)
                r=r->right;
        }
        return last_common;
        
    }
};