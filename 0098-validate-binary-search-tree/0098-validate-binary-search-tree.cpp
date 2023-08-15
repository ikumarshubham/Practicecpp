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
bool isBST(TreeNode* root,long long minv=LLONG_MIN,long long maxv=LLONG_MAX){
    if(root==NULL){
        return true;
    }
    
    if((root->val > minv && root->val< maxv) && isBST(root->left,minv,root->val) && isBST(root->right,root->val,maxv)){
        return true;
    }
    return false;
}
class Solution {
public:
    bool isValidBST(TreeNode* root) {
       //  if(root==NULL){
       //      return true;
       //  }
       //  vector<int> vec1;
       //  ans(root,vec1);
       //  int size=vec1.size();
       // for(int i=1;i<size;i++){
       //     if(vec1[i]<=vec1[i-1]){
       //         return false;
       //     }
       // }
       //  return true;
        
        return isBST(root);
    }
};