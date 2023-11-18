class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
         int i=0,j=i+1;
        int n=nums.size();
        for(;j<n;j++){
            if(nums[i]!=nums[j]){
                i++;
                swap(nums[i],nums[j]);
            }
            }
            return i+1;
    }
};