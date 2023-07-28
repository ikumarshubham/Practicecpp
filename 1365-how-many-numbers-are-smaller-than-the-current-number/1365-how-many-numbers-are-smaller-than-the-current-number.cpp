class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int size=nums.size();
        map<int,int>mpp;
        for(int i=0;i<size;i++){
            int cnt=0;
            for(int j=0;j<size;j++){
                if(j==i){
                    continue;
                }
                
                if(nums[i]>nums[j]){
                    cnt++;
                }
                
            }
            mpp[nums[i]]=cnt;
        }
        
        for(int i=0;i<size;i++){
            nums[i]=mpp[nums[i]];
        }
        
        return nums;
    }
};