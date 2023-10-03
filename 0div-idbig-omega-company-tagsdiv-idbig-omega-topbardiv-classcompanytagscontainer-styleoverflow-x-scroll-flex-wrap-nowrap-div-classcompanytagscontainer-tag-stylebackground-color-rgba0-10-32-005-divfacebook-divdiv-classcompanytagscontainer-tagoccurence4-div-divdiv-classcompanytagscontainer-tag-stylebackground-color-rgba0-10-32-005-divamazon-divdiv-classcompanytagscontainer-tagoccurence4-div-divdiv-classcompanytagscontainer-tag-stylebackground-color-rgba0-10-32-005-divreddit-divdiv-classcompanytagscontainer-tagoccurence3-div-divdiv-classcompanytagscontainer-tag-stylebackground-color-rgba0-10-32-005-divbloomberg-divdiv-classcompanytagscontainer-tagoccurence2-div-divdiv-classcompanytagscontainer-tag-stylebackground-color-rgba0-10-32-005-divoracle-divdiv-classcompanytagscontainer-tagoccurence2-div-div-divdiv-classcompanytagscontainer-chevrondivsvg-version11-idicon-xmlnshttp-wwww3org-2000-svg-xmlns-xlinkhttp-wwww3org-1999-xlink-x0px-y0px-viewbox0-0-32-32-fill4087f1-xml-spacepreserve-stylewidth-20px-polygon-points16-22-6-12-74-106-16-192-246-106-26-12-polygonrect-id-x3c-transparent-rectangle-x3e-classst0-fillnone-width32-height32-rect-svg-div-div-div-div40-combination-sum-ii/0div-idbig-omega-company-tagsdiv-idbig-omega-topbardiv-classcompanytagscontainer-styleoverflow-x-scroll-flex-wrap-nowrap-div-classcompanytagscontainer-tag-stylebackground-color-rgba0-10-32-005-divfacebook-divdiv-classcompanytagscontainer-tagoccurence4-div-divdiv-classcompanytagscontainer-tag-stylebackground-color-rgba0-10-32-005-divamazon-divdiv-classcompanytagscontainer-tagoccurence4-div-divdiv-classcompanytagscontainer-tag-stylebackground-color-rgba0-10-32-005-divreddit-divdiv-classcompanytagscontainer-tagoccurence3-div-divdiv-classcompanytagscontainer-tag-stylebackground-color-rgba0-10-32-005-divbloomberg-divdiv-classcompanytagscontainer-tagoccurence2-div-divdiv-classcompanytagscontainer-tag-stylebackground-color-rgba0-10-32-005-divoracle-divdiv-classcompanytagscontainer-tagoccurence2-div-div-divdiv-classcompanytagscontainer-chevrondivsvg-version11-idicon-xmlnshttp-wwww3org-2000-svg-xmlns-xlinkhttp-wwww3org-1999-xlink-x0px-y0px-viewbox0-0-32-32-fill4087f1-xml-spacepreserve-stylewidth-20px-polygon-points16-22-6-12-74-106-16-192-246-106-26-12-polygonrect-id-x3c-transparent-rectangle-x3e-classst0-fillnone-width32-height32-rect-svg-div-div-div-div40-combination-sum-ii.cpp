class Solution {
public:  
   void solve(vector<int>& nums,vector<int>&ans,vector<vector<int>>&final_ans,int target,int i,int n){
       
       
        if(target==0){
           
            final_ans.push_back(ans);
        }
       
       if(i>=n){
           return;
       }
        
        for(int ind=i;ind<nums.size();ind++){
            if(ind>i and nums[ind]==nums[ind-1]){
                continue;
            }
            if(nums[ind]>target){
                break;
            }
            ans.push_back(nums[ind]);
            solve(nums,ans,final_ans,target-nums[ind],ind+1,n);
            ans.pop_back();
        }
        
   }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
      vector<int>ans;
        vector<vector<int>>final_ans;
        set<vector<int>>st;
        int n=candidates.size();                                         
        solve(candidates,ans,final_ans,target,0,n);
        
        return final_ans;
    }
};