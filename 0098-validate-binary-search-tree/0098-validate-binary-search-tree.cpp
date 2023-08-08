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
void ans(TreeNode* root,vector<int>&vec1){
    if(root==NULL){
        return;
    }
    ans(root->left,vec1);
    vec1.push_back(root->val);
    ans(root->right,vec1);
}
class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        vector<int> vec1;
        ans(root,vec1);
        int size=vec1.size();
       for(int i=1;i<size;i++){
           if(vec1[i]<=vec1[i-1]){
               return false;
           }
       }
        return true;
    }
};