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
    TreeNode* solve(TreeNode* node, int &val){
        if(node==NULL)return NULL;
        if(node->val==val)return node;
        TreeNode* ans1=solve(node->left,val);
        TreeNode* ans2=solve(node->right,val);
        if(ans1!=NULL)return ans1;
        else if(ans2!=NULL)return ans2;
        return NULL;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        return solve(root,val);
    }
};