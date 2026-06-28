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
    int traverse(TreeNode* root){
        if(root == NULL)
        return 0; 
        return 1 + max(traverse(root->left), traverse(root->right));
        
    }
    int maxDepth(TreeNode* root) {
        // int ans = 0;
        // int depth = traverse(root, ans);
        return traverse(root);
    }
};
