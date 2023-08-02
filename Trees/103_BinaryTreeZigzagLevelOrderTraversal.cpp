class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> ans;
      
        queue<TreeNode*> q;
        int count=0;
        if(root==NULL){
            return ans;
        }
        q.push(root);
        while(1){
            vector<int> data;
            int size=q.size();
            count++;
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
            if(count%2==0){
                reverse(data.begin(),data.end());
            }
            ans.push_back(data);
        }
        return ans;
    }
};