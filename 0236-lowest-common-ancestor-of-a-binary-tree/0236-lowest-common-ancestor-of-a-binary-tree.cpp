/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    bool  path(TreeNode* root,TreeNode* target,vector<TreeNode*>& vec1){
    if(root==NULL){
        return false;
    }
    
    if(root==target){
        vec1.push_back(root);
        return true;
    }

    vec1.push_back(root);
    bool ls =path(root->left,target,vec1);
    
    bool rs=path(root->right,target,vec1);
    if(!(ls|rs)){
        vec1.pop_back();
    }

    return ls|rs;

    
}
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*>vec1;
        vector<TreeNode*>vec2;
        
        bool ans1=path(root,p,vec1);
        bool ans2=path(root,q,vec2);
        
        TreeNode* lca=NULL;
        
        if(ans1& ans2){
            for(int i=0;i<min(vec1.size(),vec2.size());i++){
        if(vec1[i]==vec2[i]){
            lca=vec1[i];
        }
        else{
            break;
        }
    }
        }
        
        return lca;
    }
};