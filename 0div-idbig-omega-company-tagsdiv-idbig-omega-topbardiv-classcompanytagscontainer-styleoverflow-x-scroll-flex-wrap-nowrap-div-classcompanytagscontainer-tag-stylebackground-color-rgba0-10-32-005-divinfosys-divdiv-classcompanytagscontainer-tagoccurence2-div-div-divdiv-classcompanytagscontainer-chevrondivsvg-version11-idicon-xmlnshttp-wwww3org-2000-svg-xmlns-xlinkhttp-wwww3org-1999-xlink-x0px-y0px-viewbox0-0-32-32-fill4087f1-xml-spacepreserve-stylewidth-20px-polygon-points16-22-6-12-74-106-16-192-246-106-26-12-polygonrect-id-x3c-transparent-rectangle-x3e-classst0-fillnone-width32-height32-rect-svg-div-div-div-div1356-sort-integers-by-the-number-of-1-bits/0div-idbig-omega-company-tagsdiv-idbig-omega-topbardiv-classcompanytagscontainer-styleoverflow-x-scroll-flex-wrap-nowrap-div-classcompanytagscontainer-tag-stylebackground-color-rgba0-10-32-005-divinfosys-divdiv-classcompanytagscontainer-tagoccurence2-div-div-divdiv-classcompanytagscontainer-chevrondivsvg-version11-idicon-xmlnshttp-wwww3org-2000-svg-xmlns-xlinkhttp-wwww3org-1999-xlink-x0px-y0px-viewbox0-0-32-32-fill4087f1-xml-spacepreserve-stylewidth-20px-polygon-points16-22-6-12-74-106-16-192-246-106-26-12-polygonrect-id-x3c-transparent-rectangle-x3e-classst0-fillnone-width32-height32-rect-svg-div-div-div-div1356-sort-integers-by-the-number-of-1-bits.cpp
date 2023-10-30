bool compare(int a,int b){
        int c=a;
        int d=b;
        int cnt1=0;
        int cnt2=0;
        while(c>0){
            if(c%2==1)cnt1++;
            c/=2;
        }
        
        while(d>0){
            if(d%2==1)cnt2++;
            d/=2;
        }
        if(cnt1==cnt2){
            return a<b;
        }
        return cnt1<cnt2;
    }

class Solution {
public:
    
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(),arr.end(),compare);
        return arr;
    }
};