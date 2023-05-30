class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       
        set<vector<int>>temp;
        int size=nums.size();
        sort(nums.begin(),nums.end());
        int i=0;
        for(;i<=size-3;i++){
            int t=-nums[i];
            int j=size-1,k=i+1;
            while(k<j){
                int sum=nums[j]+nums[k];
                if(sum==t){
                 vector<int> vec1 = {nums[i], nums[k], nums[j]};
                  // sort(vec1.begin(),vec1.end());
                    temp.insert(vec1);
                    j--;
                    k++;
                }
                else if(sum<t){
                    k++;
                }
                else{
                    j--;
                }
            }
        }
         vector<vector<int>> ans(temp.begin(),temp.end());
        return ans;
    }
};