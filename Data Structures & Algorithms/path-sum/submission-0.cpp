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
    // void traverse(TreeNode* root,bool &isSumFound, int sum, int targetSum){
    //     if(root == NULL)
    //     return;

    //     if(root->left == NULL && root->right == NULL)
    //     {
    //         // leaf node
    //         int totalSum = sum + root->val;
    //         if (totalSum == targetSum)
    //             isSumFound = true;
    //     }

    //     traverse(root->left,isSumFound, sum+root->val, targetSum);
    //     traverse(root->right,isSumFound, sum+root->val, targetSum);
    // }
    bool hasPathSum(TreeNode* root, int targetSum) {    
        if(root == NULL)
        return false;

        if(root->left == NULL && root->right == NULL)
        return root->val == targetSum;

        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
        
    }
};