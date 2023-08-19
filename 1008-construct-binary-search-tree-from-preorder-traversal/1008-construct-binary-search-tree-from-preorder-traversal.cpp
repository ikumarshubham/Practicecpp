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
    TreeNode* build(vector<int>preorder,int& i,long long minv=LLONG_MIN,long long maxv=LLONG_MAX){
        if(i==preorder.size()){
            return NULL;
        }
        if(preorder[i]<minv || preorder[i]>maxv){
            return NULL;
        }
        TreeNode* root=new TreeNode(preorder[i]);
        int j=i;
        i++;
        root->left=build(preorder,i,minv,preorder[j]);
        root->right=build(preorder,i,preorder[j],maxv);
        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        TreeNode* root=NULL;
        int i=0;
        
        return build(preorder,i);
        
}
};