class Solution {
public:
    bool match(TreeNode* p, TreeNode* q){
        if(p!=NULL &&q!=NULL){
            bool a=match( p->left,  q->left);
            bool b=match( p->right,  q->right);
            if(p->val==q->val&&a&&b){
                return true;
            }
        
        }
        else if(p==NULL&&q==NULL){
            return true;
        }
        
            return false;
        
        
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        return(match(p,q));
    }
};