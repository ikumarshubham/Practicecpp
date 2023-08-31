class Solution {
public:
    pair<TreeNode*,TreeNode*> solve(TreeNode* &root){
        //base case
        if(root==NULL)return {NULL,NULL};
        
        TreeNode* head=root, *tail=root;
        if(root->left!=NULL){
            pair<TreeNode*,TreeNode*>left_tree = solve(root->left);
            head= left_tree.first;
            tail= left_tree.second;
            tail->right=root;
            tail=root;
            root->left=NULL;
        }
        if(root->right!=NULL){
            pair<TreeNode*,TreeNode*>right_tree = solve(root->right);
            TreeNode* head1= right_tree.first;
            TreeNode* tail1= right_tree.second;
            tail->right=head1;
            tail=tail1;
        }
        return {head,tail};
    }
    TreeNode* increasingBST(TreeNode* root) {
        
        pair<TreeNode*,TreeNode*>ans;
        ans = solve(root);
        return ans.first;
    }
};