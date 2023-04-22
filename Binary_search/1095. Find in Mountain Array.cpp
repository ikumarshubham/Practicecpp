/**
 * // This is the MountainArray's API interface.
 * // You should not implement it, or speculate about its implementation
 * class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */
//https://leetcode.com/problems/find-in-mountain-array/
class Solution {
public:
    int findInMountainArray(int target, MountainArray &mountainArr) {
        int s=0;
        int e=mountainArr.length()-1;
        while(s<e){
            int mid=(s+e)/2;
            if( mountainArr.get(mid)>mountainArr.get(mid+1)) e=mid;
            
            else s=mid+1;
        }
        int ans=s;
        s=0;
        e=ans;
        while(s<=e){
            int mid=(s+e)/2;
            if(mountainArr.get(mid)==target) return mid;
            else if(mountainArr.get(mid)>target) e=mid-1;
            else s=mid+1;
            
        }
         s=ans;
         e=mountainArr.length()-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(mountainArr.get(mid)==target) return mid;
            else if(mountainArr.get(mid)>target) s=mid+1;
            else e=mid-1;
            
        }
        
        return -1;
        
        
    }
};