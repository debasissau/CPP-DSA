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
    void solve(TreeNode* node,int &ans,int cnt){
        if(node==NULL){
            ans=max(ans,cnt);
            return;
        }
        cnt++;
        solve(node->right,ans,cnt);
        solve(node->left,ans,cnt);
    }
    int maxDepth(TreeNode* root) {
        int ans=0,cnt=0;
        solve(root,ans,cnt);
        return ans;
    }
};