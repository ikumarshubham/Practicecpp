
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
int ans1(vector<int>& nums, int target,bool first){
    int n=nums.size();
        
        int ans=-1;
        int s=0,e=nums.size()-1;
        
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target) {
                if(first){
                    ans=mid;
                    e=mid-1;
                }
                else{
                    ans=mid;
                    s=mid+1;
                }
              }
            else if(nums[mid]>target) e=mid-1;
            else s=mid+1;    
        }
    
    return ans;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>a{2,0};
        a[0]=-1;
        a[1]=-1;
        int n=nums.size();
        if(n==0)return a;
       a[0]=ans1(nums,target,true);
        if(a[0]!=-1)
        a[1]=ans1(nums,target,false);
        return a;
    }
};