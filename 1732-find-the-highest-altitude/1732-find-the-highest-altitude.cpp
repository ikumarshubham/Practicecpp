class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int size=gain.size();
        vector<int>vec1(size+1,0);
        vec1[1]=gain[0];
        for(int i=2;i<=size;i++){
            vec1[i]=vec1[i-1]+gain[i-1];
        }
        int ans=INT_MIN;
        for(int i=0;i<=size;i++){
            ans=max(ans,vec1[i]);
        }
        return ans;
    }
};