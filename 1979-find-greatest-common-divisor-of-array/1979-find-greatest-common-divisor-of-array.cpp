class Solution {
public:
    int findGCD(vector<int>& nums) {
        int size=nums.size();
        
        
        sort(nums.begin(),nums.end());
        int smallest=nums[0];
        int largest=nums[size-1];
        
        return __gcd(smallest,largest);
    }
};