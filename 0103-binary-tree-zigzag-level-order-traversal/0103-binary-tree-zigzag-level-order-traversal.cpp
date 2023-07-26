/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> zigzag(TreeNode* root){
        vector<vector<int>>ans;
        if(root==NULL ){
            return ans;
        }
        
        
        vector<int>vec1;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        int cnt=1;
        
        while(!q.empty()){
            TreeNode* f=q.front();
            q.pop();
            
            if(f==NULL){
                   if(cnt%2==0){
                reverse(vec1.begin(),vec1.end());
            }
            ans.push_back(vec1);
            cnt++;
            vec1.clear();
            if(!q.empty()){
                q.push(NULL);
            }
            }
            
            else{
                vec1.push_back(f->val);
                if(f->left!=NULL){
                    q.push(f->left);
                }
                if(f->right!=NULL){
                    q.push(f->right);
                }
            }
        }
        
        return ans;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        return zigzag(root);
    }
};