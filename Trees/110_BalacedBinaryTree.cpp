class Solution {
public:
    int height(TreeNode* root){
        if(root==NULL){
            return 0;
        }
        int lefth=height(root->left);
        int righth=height(root->right);
        return 1+max(lefth,righth);
    }
    void Inoredrutil(TreeNode* root,bool &ans){
          if(root!=NULL){
            Inoredrutil(root->left,ans);
            int a=height(root->left);
            int b=height(root->right);
            if(abs(a-b)>1){
                ans=ans&&false;
            }
            Inoredrutil(root->right,ans);
          }
    }
    bool isBalanced(TreeNode* root) {
       bool ans=true;
       Inoredrutil(root,ans);
       return ans;
    }
};