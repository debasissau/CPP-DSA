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
    void solve(TreeNode* node,string &str){
        if(!(node->left) && !(node->right)){
            str+=node->val;
            return;
        }
        if(node->left)solve(node->left,str);
        if(node->right)solve(node->right,str);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        string str1="",str2="";
        solve(root1,str1);
        solve(root2,str2);
        return (str1==str2);
    }
};