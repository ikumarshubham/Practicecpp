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
    
    bool leaf(TreeNode* root){
        return (root->left==NULL and root->right==NULL);
    }
    
    void path(TreeNode* root,vector<string>& vec1,string ans){
        if(root==NULL){
            return ;
        }
        if(leaf(root)){
            ans+=to_string(root->val);
            vec1.push_back(ans);
            return;
        }
        
        ans+=to_string(root->val);
        ans+="->";
       path(root->left,vec1,ans);
    
    path(root->right,vec1,ans);
    
   

    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
      
        vector<string>vec1;
        string ans;
        path(root,vec1,ans);
        
        // for(int x:vec1){
        //     cout<<x<<" ";
        // }
        
        return vec1;
    }
};