class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int size=nums.size();
        int n=size-1;
        sort(nums.begin(),nums.end());
        for(int i=1;i<size;i++){
            if(nums[i]==nums[i-1]){
                return nums[i];
            }
        }
        
        return 0;
    }
};