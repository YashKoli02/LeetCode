class Solution {
public:
    void recursive(TreeNode* root, vector<int> &res,int n){
         if(root==NULL){
            return;
        }
        if(res.size()<n){
            res.push_back(root->val);
        }
         recursive(root->right,res,n+1);
         recursive(root->left,res,n+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int> res;
        if(root==NULL){
            return res;
        }
        recursive(root,res,1);
        return res;
    }
};