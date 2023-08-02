class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        if(!root){
            return ans;
        }
        q.push(root);
        while(1){
            vector<int> data;
            int size=q.size();
            if(size==0){
                return ans;
            }
            while(size>0){
                TreeNode* temp=q.front();
                q.pop();
                data.push_back(temp->val);
                if(temp->left){
                    q.push(temp->left);
                }
                 if(temp->right){
                    q.push(temp->right);
                }
                size--;
            }
            ans.push_back(data);
        }
        return ans;
    }
};