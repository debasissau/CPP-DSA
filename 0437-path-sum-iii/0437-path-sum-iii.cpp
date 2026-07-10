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
    void solve(TreeNode* node, int &targetSum,int &ans,long long prefixSum,unordered_map<long long ,int>&mp){
        if(node==NULL)return;
        prefixSum+=node->val;

        ans+=mp[prefixSum-targetSum];
        mp[prefixSum]++;
        
        if(node->left)solve(node->left,targetSum,ans,prefixSum,mp);
        if(node->right)solve(node->right,targetSum,ans,prefixSum,mp);
        mp[prefixSum]--;
    }
    int pathSum(TreeNode* root, int targetSum) {
        int ans=0;
        long long prefixSum=0;
        unordered_map<long long,int>mp;
        mp[0]=1;
        solve(root,targetSum,ans,prefixSum,mp);
        return ans;
    }
};