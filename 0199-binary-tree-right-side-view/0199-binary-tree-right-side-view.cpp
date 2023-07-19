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
    void right_view(TreeNode* root,vector<int>& vec1,int level,int& max_level){
        if(root==NULL){
            return;
        }
        
        if(max_level<level){
            vec1.push_back(root->val);
            max_level=level;
        }
        right_view(root->right,vec1,level+1,max_level);
        right_view(root->left,vec1,level+1,max_level);
        
        return;
    }
    vector<int> rightSideView(TreeNode* root) {
        vector<int>vec1;
        int level=0;
        int max_level=-1;
        
        right_view(root,vec1,level,max_level);
        
        return vec1;
        
        
    }
};