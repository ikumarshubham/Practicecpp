class Solution {
public:
    int arraySign(vector<int>& nums) {
        int size=nums.size();
        int ans=1;
        for(int i=0;i<size;i++){
            if(nums[i]==0){
                return 0;
            }
            else if(nums[i]>0){
                continue;
            }
            else{
                ans*=-1;
            }
        }
        
        return ans;
        
    }
};