/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
    public:
    vector<int> preorder(Node* root) {
        vector<int> ret;
        if(!root)
            return ret;
        ret.push_back(root->val);
        for(auto i:root->children){
            vector<int> temp=preorder(i);
            ret.insert(ret.end(),temp.begin(),temp.end());
        }
        return ret;
        
    }
};