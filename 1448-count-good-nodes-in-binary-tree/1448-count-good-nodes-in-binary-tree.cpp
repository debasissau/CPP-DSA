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
    void solve(TreeNode* node,int maxi,int &ans){
        if(node==NULL)return;
        if(node->val>=maxi){ans++;maxi=node->val;cout<<maxi<<" "<<ans<<endl;}
        if(node->left)solve(node->left,maxi,ans);
        if(node->right)solve(node->right,maxi,ans);
    }
    int goodNodes(TreeNode* root) {
        int ans=0,maxi=root->val;
        solve(root,maxi,ans);
        return ans;
    }
};