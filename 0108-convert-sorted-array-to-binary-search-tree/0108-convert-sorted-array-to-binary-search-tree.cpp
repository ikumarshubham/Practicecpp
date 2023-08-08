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
    TreeNode* ans(vector<int>& nums,int s,int e){
        if(s>e){
            return NULL;
        }
        
        int m=(s+e)/2;
        TreeNode* root=new TreeNode(nums[m]);
        root->left=ans(nums,s,m-1);
        root->right=ans(nums,m+1,e);
        return root;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int s=0,e=nums.size()-1;
        return ans(nums,s,e);
    }
};