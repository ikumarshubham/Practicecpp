class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
         int size=nums.size();
        vector<int>vec1(size,0);
       int prefix=1;
        for(int i=0;i<size;i++){
            vec1[i]=prefix;
            prefix*=nums[i];
        }
        int postfix=1;
        for(int i=size-1;i>=0;i--){
            vec1[i]*=postfix;
            postfix*=nums[i];
        }
        return vec1;
    }
};