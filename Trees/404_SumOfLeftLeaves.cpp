class Solution {
public:
    int sum=0;
    void leftSum(TreeNode* root,bool isleft){
        if(isleft&&!root->left&&!root->right){
            sum+=root->val;
            return;
        }
        if(root->left){
            leftSum(root->left,true);
        }
        if(root->right){
            leftSum(root->right,false);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(!root){
            return 0;
        }
        leftSum(root,false);
        return sum;
    }
};