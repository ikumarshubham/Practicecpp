class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size=nums.size();
        vector<int>vec1(size,0);
        int cnt=0;
        int k;
        for(int i=0;i<size;i++){
            if(nums[i]==0){cnt++;k=i;}
        }
        if(cnt>1)return vec1;
        else if(cnt==1){
            int ans=1;
            for(int i=0;i<size;i++){
                if(i==k)continue;
                ans*=nums[i];
            }
            vec1[k]=ans;
            return vec1;
        }
        
        int ans=1;
        for(int i=0;i<size;i++){
            ans*=nums[i];
        }
        for(int i=0;i<size;i++){
            vec1[i]=ans/nums[i];
        }
        return vec1;
    }
};