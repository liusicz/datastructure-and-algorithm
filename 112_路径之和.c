/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
 void dfs(struct TreeNode* root,int targetSum,bool* flag,int sum)
 {
    if(root==NULL){
        return ;
    }
    sum=sum+root->val;
    if(root->left==NULL&&root->right==NULL&&sum==targetSum){
        *flag=true;
    }
    dfs(root->left,targetSum,flag,sum);
    dfs(root->right,targetSum,flag,sum);
 }
bool hasPathSum(struct TreeNode* root, int targetSum) {
    int sum=0;
    bool flag=false;
    dfs(root,targetSum,&flag,sum);
    return flag;
}