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
    vector<double> averageOfLevels(TreeNode* root) {
        vector<double>ans;
        vector<double>vec1;
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            TreeNode* f=q.front();
            q.pop();
            if(f==NULL){
                double ans1=0;
            ans1=accumulate(vec1.begin(),vec1.end(),ans1);
                ans.push_back(ans1/vec1.size());
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
};