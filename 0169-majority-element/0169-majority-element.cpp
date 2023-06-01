class Solution {
public:
    int majorityElement(vector<int>& nums) {
         int size=nums.size();
        int count=0;
        int element;
         for(int i=0;i<size;i++){
             if(count==0){
                 element=nums[i];
                 count=1;
             }
             else if(element==nums[i]){
                count++;
             }
             else {
                 count--;
             }
         }
        
        int count1=0;
        
        for(int i=0;i<size;i++){
            if(nums[i]==element){
                count1++;
            }
            if(count1>size/2){
                return element;
            }
        }
        return -1;
    }
};