class Solution {
public:
    int search(TreeNode* root,int max){
        if(!root){
            return 0;
        }
        int count=0;
        if(root->val>=max){
            max=root->val;
            count++;
        }
        count+=search(root->left,max);
        count+=search(root->right,max);
        return count;
    }
    vector<int> ans;
    int goodNodes(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        if(!root->left&&!root->right){
            return  1;
        }
        int good=0;
        good+=search(root->left,root->val);
        good+=search(root->right,root->val);
        return good+1;
    }
};