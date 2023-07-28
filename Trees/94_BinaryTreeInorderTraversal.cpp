class Solution {
public:
     vector<int> ans;
     vector<int> inorderTraversal2(TreeNode* root){
         if(root->left){
        inorderTraversal2(root->left);
         }
        ans.push_back(root->val);
         if(root->right){
        inorderTraversal2(root->right);
         }
         return ans;
     }
    vector<int> inorderTraversal(TreeNode* root) {
       
        if(!root){
            return ans;
        }
     return  inorderTraversal2(root);
        
    }
};