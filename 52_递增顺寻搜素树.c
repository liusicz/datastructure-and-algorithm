/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


struct TreeNode* increasingBST(struct TreeNode* root){
    if(root==NULL){
        return NULL;
    }
    if(root->left!=NULL){
        struct TreeNode* lefthead=increasingBST(root->left);
        struct TreeNode* p=lefthead;
        while(p->right!=NULL){
            p=p->right;
        }
        p->right=root;
        root->left=NULL;
    
        root->right=increasingBST(root->right);
        return lefthead;
    }
    root->right=increasingBST(root->right);
    return root;
}