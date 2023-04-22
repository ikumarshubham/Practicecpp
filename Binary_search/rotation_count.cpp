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


int main(){
    int nums[]={2,2,2,9,9};
    int ans=pivot(nums);
    cout<<ans+1;
}