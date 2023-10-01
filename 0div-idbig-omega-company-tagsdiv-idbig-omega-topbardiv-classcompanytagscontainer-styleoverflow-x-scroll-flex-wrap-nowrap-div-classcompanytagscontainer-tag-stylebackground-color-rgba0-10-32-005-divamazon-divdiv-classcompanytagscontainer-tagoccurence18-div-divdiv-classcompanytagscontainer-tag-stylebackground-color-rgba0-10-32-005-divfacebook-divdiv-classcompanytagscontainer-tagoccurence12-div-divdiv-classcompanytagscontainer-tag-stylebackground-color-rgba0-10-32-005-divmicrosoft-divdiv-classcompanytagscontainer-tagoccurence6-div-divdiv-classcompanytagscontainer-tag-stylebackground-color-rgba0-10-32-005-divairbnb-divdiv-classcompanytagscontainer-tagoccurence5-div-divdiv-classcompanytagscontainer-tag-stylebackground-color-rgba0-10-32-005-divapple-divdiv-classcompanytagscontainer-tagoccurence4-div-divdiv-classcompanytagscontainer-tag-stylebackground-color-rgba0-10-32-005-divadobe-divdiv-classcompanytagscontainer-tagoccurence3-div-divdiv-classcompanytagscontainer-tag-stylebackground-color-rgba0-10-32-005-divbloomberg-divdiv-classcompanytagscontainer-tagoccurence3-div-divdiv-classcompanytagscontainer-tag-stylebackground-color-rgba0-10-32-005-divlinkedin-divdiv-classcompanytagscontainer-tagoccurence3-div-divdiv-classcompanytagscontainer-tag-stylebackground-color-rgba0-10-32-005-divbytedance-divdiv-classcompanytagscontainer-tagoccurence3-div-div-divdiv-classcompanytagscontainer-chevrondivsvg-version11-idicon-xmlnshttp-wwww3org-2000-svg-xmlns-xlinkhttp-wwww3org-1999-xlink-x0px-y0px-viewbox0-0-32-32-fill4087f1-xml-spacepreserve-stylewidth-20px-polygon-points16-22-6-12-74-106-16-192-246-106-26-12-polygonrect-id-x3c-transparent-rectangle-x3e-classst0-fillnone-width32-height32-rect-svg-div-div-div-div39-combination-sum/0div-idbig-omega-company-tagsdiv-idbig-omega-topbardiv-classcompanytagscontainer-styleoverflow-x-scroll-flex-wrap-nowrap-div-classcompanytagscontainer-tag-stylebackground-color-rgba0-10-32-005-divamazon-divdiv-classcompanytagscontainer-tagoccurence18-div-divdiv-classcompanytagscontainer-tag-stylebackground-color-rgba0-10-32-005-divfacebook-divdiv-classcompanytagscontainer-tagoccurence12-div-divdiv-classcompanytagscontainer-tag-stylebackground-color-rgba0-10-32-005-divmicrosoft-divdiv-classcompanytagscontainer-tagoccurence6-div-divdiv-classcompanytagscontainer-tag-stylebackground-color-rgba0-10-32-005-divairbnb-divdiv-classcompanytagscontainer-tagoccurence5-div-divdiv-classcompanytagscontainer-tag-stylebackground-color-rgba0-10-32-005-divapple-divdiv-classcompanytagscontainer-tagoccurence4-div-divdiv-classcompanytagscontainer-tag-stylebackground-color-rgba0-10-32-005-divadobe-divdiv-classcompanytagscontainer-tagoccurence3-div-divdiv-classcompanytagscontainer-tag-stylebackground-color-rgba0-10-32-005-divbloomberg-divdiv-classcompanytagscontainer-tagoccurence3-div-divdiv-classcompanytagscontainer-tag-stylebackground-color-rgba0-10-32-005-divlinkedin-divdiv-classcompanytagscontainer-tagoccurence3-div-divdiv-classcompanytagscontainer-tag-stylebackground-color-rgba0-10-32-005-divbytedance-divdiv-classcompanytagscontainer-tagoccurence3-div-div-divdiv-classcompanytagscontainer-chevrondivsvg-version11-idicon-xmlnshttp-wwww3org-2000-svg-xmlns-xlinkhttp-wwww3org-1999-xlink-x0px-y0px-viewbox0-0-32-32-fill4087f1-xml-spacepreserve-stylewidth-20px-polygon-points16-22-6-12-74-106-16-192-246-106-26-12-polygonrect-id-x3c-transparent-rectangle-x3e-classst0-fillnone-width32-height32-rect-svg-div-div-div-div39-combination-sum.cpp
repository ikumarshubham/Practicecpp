class Solution {
public:
    
    void solve(vector<int>& nums,vector<int>&ans,vector<vector<int>>&final_ans,int target ,long long int sum,int i,int n){
        if(i>=n){
            return;
        }
        if(sum==target){
            final_ans.push_back(ans);
            return;
        }
        
        if(sum>target){
            return;
        }
        
        sum+=nums[i];
        ans.push_back(nums[i]);
        solve(nums,ans,final_ans,target,sum,i,n);
        ans.pop_back();
        sum-=nums[i];
        solve(nums,ans,final_ans,target,sum,i+1,n);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>ans;
        vector<vector<int>>final_ans;
        int n=candidates.size();
        solve(candidates,ans,final_ans,target,0,0ll,n);
        return final_ans;
    }
};