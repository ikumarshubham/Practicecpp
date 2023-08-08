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
    void ans(TreeNode* root,map<int,int>&vec1){
    if(root==NULL){
        return;
    }
    ans(root->left,vec1);
    vec1[root->val]++;
    ans(root->right,vec1);
}
    vector<int> findMode(TreeNode* root) {
        map<int,int> vec1;
        vector<int>vec2;
        ans(root,vec1);
        int cnt=0,maxi=INT_MIN;
        for(auto x:vec1){
            if(x.second>maxi){
                maxi=x.second;
            }
        }
        
        for(auto x:vec1){
            if(maxi==x.second){
                vec2.push_back(x.first);
            }
        }
        return vec2;
    }
};