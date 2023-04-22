
https://leetcode.com/problems/search-in-rotated-sorted-array/

// doesnot work for duplicate elements

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0,e=nums.size()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>=nums[s]){
                if(target>=nums[s] && target<nums[mid]) e=mid-1;
                else s=mid+1;
            }
            else if(nums[mid]<=nums[e]){
                  if(target>nums[mid] && target<=nums[e]) s=mid+1;
                else e=mid-1;
            }
        }
        return -1;
    }
};



// pivot method for not duplicate element


int pivot(vector<int>& nums){
    int n=nums.size();
     int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(mid<e && nums[mid]>nums[mid+1]) return mid;
        else if(mid>s && nums[mid]<nums[mid-1]) return mid-1;//here the algo will not work for duplicate
        else if(nums[s]>=nums[mid])e=mid-1;
        else s=mid+1;
    }
    return -1;
    
}
 int binary_search(vector<int>& nums, int target,int s,int e){
     while(s<=e){
         int mid=(s+e)/2;
         if(nums[mid]==target)return mid;
         else if(nums[mid]>target)e=mid-1;
         else s=mid+1;
     }
     return -1;
 }
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int ans1=pivot(nums);
        
     
        if(ans1==-1) return binary_search(nums,target,0,n-1);
        if(nums[ans1]==target)return ans1;
        if(nums[0]<=target)
        return binary_search(nums,target,0,ans1-1);
        
       
        return binary_search(nums,target,ans1+1,n-1);
    
    
    }
};





// for arrays with duplicate elements


#include<iostream>
#include<vector>
using namespace std;
int pivot(int nums[]){
    int n=5;
     int s=0,e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(mid<e && nums[mid]>nums[mid+1]) return mid;
        if(mid>s && nums[mid]<nums[mid-1]) return mid-1;
        if(nums[s]==nums[mid]&&nums[mid]==nums[e]){
            if(nums[s]>nums[s+1]) return s;
            s++;
             if(nums[e]<nums[e-1]) return e-1;
        }
        
        else if((nums[s]<nums[mid] )||(nums[s]==nums[mid] && nums[mid]>nums[e])) s=mid+1;
        else e=mid-1;
    }
    return -1;
    
}
 int binary_search(int nums[], int target,int s,int e){
     while(s<=e){
         int mid=(s+e)/2;
         if(nums[mid]==target)return mid;
         else if(nums[mid]>target)e=mid-1;
         else s=mid+1;
     }
     return -1;
 }

    int search(int nums[], int target) {
        int n=5;
        int ans1=pivot(nums);
        
        
     
        if(ans1==-1) return binary_search(nums,target,0,n-1);
        if(nums[ans1]==target)return ans1;
        if(nums[0]<=target)
        return binary_search(nums,target,0,ans1-1);
        
       
        return binary_search(nums,target,ans1+1,n-1);
    
    
    }
int main(){
    int nums[]={2,9,2,2,2};
    cout<<search(nums,9);
}