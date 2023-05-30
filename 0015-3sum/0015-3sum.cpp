class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
       // set<vector<int>>temp;
        vector<vector<int>> ans;
        int size=nums.size();
        sort(nums.begin(),nums.end());
        
        for(int i=0;i<=size-3;i++){
            if(i>0 && nums[i]==nums[i-1])continue;
            int t=-nums[i];
            int j=size-1,k=i+1;
            while(k<j){
                int sum=nums[j]+nums[k];
                if(sum==t){
                 vector<int> vec1 = {nums[i], nums[k], nums[j]};
                    ans.push_back(vec1);
                    j--;
                    k++;
                    while(k<j && nums[k]==nums[k-1])k++;
                    while(k<j && nums[j]==nums[j+1])j--;
                }
                else if(sum<t){
                    k++;
                }
                else{
                    j--;
                }
                
            }
        }
        // vector<vector<int>> ans(temp.begin(),temp.end());
        return ans;
    }
};