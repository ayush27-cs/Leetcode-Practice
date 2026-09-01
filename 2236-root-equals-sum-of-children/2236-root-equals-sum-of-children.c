/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool checkTree(struct TreeNode* root) {
    int left_val = root->left->val;
    int right_val = root->right->val;
    
    int sum = left_val + right_val;

    if (root->val == sum) {
        return true;
    } 
    return false;
}