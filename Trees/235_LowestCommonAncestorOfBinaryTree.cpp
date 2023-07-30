class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
            return NULL;
        }
        if(p->val==root->val||q->val==root->val){
            return root;
        }
        root->left=lowestCommonAncestor(root->left,p,q);
         root->right=lowestCommonAncestor(root->right,p,q);
        if(!root->left){
            return root->right;
        }
        if(!root->right){
            return root->left;
        }
        return root;
    }
};