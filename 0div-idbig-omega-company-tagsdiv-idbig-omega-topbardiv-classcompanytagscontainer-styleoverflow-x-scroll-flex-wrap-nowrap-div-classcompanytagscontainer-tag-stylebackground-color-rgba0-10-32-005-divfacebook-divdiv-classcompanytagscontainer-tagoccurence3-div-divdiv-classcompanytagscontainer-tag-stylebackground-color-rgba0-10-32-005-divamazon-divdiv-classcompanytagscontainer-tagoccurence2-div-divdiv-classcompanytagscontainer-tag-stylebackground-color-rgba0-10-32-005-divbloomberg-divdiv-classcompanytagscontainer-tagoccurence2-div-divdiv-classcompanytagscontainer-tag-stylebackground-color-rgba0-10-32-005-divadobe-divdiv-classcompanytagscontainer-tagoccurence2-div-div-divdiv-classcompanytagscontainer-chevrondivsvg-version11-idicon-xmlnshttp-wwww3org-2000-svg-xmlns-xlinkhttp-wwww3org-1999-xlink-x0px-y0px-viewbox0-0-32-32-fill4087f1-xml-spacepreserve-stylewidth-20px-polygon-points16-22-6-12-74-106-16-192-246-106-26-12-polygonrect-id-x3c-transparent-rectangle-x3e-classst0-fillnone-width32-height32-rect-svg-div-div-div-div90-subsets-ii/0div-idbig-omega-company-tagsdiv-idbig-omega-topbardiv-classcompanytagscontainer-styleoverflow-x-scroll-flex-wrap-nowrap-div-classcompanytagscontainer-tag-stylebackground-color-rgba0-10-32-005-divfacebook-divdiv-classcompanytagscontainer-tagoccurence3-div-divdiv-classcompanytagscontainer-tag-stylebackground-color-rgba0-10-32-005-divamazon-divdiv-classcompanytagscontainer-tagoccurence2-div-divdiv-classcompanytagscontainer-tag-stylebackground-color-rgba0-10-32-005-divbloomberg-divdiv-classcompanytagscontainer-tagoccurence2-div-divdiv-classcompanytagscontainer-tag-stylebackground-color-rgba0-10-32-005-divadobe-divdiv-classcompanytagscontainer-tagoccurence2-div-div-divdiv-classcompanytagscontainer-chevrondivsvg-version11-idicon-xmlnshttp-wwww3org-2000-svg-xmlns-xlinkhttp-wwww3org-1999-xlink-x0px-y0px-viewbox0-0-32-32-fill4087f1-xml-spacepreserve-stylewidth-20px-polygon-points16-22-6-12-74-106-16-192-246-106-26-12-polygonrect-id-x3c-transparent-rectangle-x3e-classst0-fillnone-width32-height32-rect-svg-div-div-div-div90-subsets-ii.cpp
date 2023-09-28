class Solution {
public:
    
   void solve(vector<int>&nums,vector<int>&ans,set<vector<int>>&st,int n, int i){
        if(i==n){
            st.insert(ans);
            return;
        }
        
        ans.push_back(nums[i]);
        solve(nums,ans,st,n,i+1);
        ans.pop_back();
        solve(nums,ans,st,n,i+1);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        vector<int>ans;
        vector<vector<int>>final_ans;
        int n=nums.size();
        if(n==0){
            return {{}};
        }
        
        solve(nums,ans,st,n,0);
        
        for(auto it : st){
            final_ans.push_back(it);
        }
        
      
        return final_ans;
    }
};