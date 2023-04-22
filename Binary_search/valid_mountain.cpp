
//https://leetcode.com/problems/valid-mountain-array/

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int flag=1;
        int n=arr.size();
        if(n<3) return false;
        //int ans1=0,ans=0;
        int ans=-1;
        for(int i=1;i<n-1;i++){
            if(arr[i]==arr[i+1])return false;
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])ans=i;
        }
        //cout<<ans;
        if(ans==-1) return false;
        for(int i=0;i<ans;i++)
        if(arr[i]>arr[i+1]) return false;
        for(int i=ans;i<n-1;i++)
        if(arr[i]<arr[i+1]) return false;
        return true;
    }
};