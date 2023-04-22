
//https://leetcode.com/problems/find-peak-element/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       
        int s=0,e=nums.size()-1;
     
        while(s<e){
            int mid=(s+e)/2;
            if(nums[mid]>nums[mid+1]) {
             
                e=mid;
                
                   //you are decreasing part of the array 
                //this may be your ans;
                //that is why e=mid-1
            }
            else{
                s=mid+1;
                
                //you are int the increasing part of the array
                // and we know mid+1 is larger number 
            }
        }
        
        
      return s; 
    }
};