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
    void preo(TreeNode* n,vector<int>& v)
    {
        if(n == NULL)
            return;
        v.push_back(n->val);
        preo(n->left,v);
        preo(n->right,v);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        preo(root,ans);
        return ans;
    }
};