class Solution {
public:
     void solve(vector<int>&nums,set<vector<int>>&st,int i){
        if(i==nums.size()){
            st.insert(nums);
            return ;
        }
        
        for(int j=i;j<nums.size();j++){
            swap(nums[i],nums[j]);
            solve(nums,st,i+1);
            swap(nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>st;
        vector<vector<int>>ans;
        solve(nums,st,0);
        for(auto it: st){
            ans.push_back(it);
            
        }
        
        return ans;
    }
};