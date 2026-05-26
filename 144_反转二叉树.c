/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode* flipTree(struct TreeNode* root) {
    if(root==NULL){
        return NULL;
    }
    else{
        struct TreeNode* t;
        t=root->left;
        root->left=root->right;
        root->right=t;
        flipTree(root->left);
        flipTree(root->right);

    }
    return root;
    
}