class Solution {
public:
    
    void solve(vector<int>&nums,vector<int>&ans,vector<vector<int>>&final_ans,int n, int i){
        if(i==n){
            final_ans.push_back(ans);
            return;
        }
        
        ans.push_back(nums[i]);
        solve(nums,ans,final_ans,n,i+1);
        ans.pop_back();
        solve(nums,ans,final_ans,n,i+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        
        
        int n=nums.size();
        if(n==0){
            return{{}};
            
        }
        
        vector<int>ans;
        vector<vector<int>>final_ans;
        
        solve(nums,ans,final_ans,n,0);
        return final_ans;
    }
};