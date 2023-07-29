class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return false;
        }
        if(!root->left&&!root->right){
            return root->val==targetSum;
        }
        bool pathSum=false;
        if(root->left){
            pathSum=hasPathSum(root->left,targetSum-root->val);
        }
        if(root->right){
            pathSum=pathSum||hasPathSum(root->right,targetSum-root->val);
        }
        return pathSum;
    }
};