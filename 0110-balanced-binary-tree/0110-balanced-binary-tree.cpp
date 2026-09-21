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
    int height(TreeNode* root, bool &balanced){
        if(!root) return 0;
        int l = height(root->left,balanced); //left height
        int r = height(root->right,balanced);  //right height

        if(abs(l-r)>1) balanced = false;

        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        bool balanced = true;
        height(root,balanced);
        return balanced;
    }
};