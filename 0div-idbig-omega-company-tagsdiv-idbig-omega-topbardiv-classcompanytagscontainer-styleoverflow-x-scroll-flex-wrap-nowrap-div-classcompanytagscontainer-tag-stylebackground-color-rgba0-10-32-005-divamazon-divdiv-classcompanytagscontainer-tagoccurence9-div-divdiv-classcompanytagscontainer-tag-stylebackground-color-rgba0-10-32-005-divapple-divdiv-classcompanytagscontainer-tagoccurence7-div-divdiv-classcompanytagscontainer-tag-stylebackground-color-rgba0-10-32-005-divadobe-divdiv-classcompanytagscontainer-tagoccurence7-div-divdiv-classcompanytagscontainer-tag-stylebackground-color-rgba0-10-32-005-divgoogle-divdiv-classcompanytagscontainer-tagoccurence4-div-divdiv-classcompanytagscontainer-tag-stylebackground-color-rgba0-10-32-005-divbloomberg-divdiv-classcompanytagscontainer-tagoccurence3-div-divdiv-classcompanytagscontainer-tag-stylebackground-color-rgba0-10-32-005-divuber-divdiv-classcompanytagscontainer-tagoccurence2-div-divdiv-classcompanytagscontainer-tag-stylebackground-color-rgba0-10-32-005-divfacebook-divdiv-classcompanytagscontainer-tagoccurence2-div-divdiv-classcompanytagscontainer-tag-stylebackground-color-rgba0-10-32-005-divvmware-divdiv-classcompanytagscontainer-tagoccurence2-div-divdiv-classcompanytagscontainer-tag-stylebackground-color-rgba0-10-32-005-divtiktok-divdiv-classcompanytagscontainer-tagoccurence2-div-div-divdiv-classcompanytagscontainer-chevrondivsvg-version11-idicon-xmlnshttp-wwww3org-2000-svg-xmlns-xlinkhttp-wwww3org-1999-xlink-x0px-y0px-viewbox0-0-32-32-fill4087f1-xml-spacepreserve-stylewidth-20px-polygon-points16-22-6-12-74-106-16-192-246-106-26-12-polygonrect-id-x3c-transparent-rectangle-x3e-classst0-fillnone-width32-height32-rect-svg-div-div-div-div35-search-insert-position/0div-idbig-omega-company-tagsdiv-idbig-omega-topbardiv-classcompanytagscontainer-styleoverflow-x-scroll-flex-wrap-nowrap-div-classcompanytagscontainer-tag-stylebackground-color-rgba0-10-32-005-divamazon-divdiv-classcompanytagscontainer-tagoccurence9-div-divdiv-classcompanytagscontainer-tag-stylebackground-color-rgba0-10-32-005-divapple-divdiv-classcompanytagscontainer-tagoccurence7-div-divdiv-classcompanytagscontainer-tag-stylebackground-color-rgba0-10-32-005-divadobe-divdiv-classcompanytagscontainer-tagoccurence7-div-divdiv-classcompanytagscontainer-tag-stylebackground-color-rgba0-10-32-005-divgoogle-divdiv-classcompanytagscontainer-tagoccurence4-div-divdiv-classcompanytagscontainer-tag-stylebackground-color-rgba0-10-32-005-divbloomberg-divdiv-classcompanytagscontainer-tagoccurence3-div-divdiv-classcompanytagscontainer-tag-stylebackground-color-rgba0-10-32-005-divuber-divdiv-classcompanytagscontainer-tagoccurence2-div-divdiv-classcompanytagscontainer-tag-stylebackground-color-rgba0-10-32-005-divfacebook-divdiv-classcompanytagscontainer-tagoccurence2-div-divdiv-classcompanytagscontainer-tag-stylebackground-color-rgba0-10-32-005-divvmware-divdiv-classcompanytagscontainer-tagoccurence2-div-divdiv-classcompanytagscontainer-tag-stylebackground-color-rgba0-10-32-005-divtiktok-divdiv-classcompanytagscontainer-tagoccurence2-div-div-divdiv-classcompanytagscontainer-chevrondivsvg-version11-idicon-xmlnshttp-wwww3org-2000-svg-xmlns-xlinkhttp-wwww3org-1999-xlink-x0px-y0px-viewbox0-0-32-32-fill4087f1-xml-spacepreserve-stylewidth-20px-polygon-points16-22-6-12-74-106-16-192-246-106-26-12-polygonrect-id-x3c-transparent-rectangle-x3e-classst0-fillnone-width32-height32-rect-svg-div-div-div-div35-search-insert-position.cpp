class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        if(target>nums[e])return e+1;
        if(target<nums[s])return s;
        while(s<=e){
            int m=(s+e)/2;
            if(nums[m]==target)return m;
            else if(nums[m]>target)e=m-1;
            else s=m+1;
        }
        return s;
    }
};