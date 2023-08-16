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
    void inorder(TreeNode* root,vector<int>& vec1){
        if(root==NULL){
            return;
        }
        inorder(root->left,vec1);
        vec1.push_back(root->val);
        inorder(root->right,vec1);
    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int>vec1;
        inorder(root,vec1);
        int ans=0;
        for(int i=0;i<k;i++){
            ans=vec1[i];
        }
        return ans;
    }
};