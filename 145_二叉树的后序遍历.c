 void dfs(struct TreeNode* root,int* returnSize,int* ret){
    if(root==NULL){
        return;
    }
    dfs(root->left,returnSize,ret);
    dfs(root->right,returnSize,ret);
    ret[(*returnSize)++]=root->val;
 }
int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* ret=(int*)malloc(100*sizeof(int));
    *returnSize=0;
    dfs(root,returnSize,ret);
    return ret;
}