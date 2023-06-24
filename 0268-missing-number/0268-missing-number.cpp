class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int size=nums.size();
        int n=size;
        long long int sum = ((n)*(n+1))/2;
        
        long long int array_sum=0;
        for(int i=0;i<size;i++){
            array_sum+=nums[i];
        }
        
        return sum-array_sum;
    }
};