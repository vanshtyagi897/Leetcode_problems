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
    vector<int> largestValues(TreeNode* root) {
        vector<int>ans;
        queue<TreeNode*>q;
        if(!root) return ans;
        q.push(root);
        

        int level_size;
        while(!q.empty()){
            vector<int>level;
            level_size=q.size();
            TreeNode* temp;
            int maxi = INT_MIN;
            for(int i=0;i<level_size;i++){
                temp=q.front();
                q.pop();
                if(temp->val > maxi) maxi=temp->val;
                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            ans.push_back(maxi);
            
        }
        return ans;
    }
};