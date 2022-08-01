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
class Solution {
    
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ret;
        if(!root)
            return ret;
        ret.push_back(vector<int>(1,root->val));
        if(root->left || root->right){
            vector<vector<int>> left=levelOrder(root->left),right=levelOrder(root->right);
            int i_limit=max(left.size(),right.size());
            for(int i=0;i<i_limit;i++){
                if(i<left.size() &&i<right.size()){
                    ret.push_back(left[i]);
                    ret.back().insert(ret.back().end(),right[i].begin(),right[i].end());
                }
                else if(i<left.size()){
                    ret.push_back(left[i]);
                }
                else{
                    ret.push_back(right[i]);
                }
            }
        }
        return ret;
    }
};