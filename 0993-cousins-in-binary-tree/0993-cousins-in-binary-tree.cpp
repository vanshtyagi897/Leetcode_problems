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
    bool sameParent(TreeNode* root, int x, int y){ // return true if both have same parent
        if(!root) return 0;
        if(root->left && root->right){
            if(root->left->val==x && root->right->val==y) return 1;
            if(root->left->val==y && root->right->val==x) return 1;
        }
        return sameParent(root->left,x,y) || sameParent(root->right,x,y);
    }
    bool isCousins(TreeNode* root, int x, int y) {
        queue<TreeNode*>q;
        q.push(root);
        int l1=-1; // level of x
        int l2=-1; // level of y
        int level=0;
        while(!q.empty()){
            int n=q.size(); // size of queue
            while(n--){
                TreeNode * temp = q.front();
                q.pop();
                if(temp->val == x ){
                    l1= level;
                } 
                if(temp->val == y ){
                    l2= level;
                }
                if(temp->left){
                    q.push(temp->left);
                }
                if(temp->right){
                    q.push(temp->right);
                }
            }
            level++;
            if(l1!=l2) return 0; // level of x and y are not same
            if(l1!=-1 && l2!=-1) break; // level has been found for both x and y
        } 
        return !sameParent(root,x,y);
    }
};