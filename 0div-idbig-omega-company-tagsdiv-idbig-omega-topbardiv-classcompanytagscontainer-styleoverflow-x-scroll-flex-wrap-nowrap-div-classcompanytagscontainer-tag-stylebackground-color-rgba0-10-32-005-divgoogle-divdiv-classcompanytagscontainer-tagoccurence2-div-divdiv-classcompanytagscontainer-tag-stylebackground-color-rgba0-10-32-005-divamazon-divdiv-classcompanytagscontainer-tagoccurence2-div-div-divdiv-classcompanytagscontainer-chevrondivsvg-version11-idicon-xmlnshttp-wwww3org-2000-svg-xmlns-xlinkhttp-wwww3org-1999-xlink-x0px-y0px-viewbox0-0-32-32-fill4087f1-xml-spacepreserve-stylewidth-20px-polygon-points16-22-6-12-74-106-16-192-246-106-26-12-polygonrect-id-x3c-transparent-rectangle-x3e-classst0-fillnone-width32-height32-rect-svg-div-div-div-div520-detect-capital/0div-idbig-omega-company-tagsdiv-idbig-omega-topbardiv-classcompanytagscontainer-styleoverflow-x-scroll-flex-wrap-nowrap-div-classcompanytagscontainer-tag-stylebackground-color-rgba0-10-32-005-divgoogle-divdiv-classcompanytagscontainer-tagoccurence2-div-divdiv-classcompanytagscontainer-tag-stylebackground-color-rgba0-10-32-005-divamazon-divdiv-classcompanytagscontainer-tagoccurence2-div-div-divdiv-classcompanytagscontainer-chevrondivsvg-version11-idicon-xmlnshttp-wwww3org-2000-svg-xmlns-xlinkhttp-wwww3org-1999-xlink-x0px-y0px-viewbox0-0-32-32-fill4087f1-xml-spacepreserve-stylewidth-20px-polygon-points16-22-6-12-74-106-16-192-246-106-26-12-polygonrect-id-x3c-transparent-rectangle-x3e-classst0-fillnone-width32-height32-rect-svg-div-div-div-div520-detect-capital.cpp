class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int cnt1=0,cnt2=0;
        if(word[0]>='A' and word[0]<='Z'){
            cnt1++;
        }
        for(int i=1;i<n;i++){
            if(word[i]>='A' and word[i]<='Z'){
                cnt2++;
            }
        }
        
        if(cnt1==1 and cnt2==0){
            return true;
        }
        
        if(cnt1+cnt2==n){
            return true;
        }
        if(cnt1+cnt2==0){
            return true;
        }
        
        return false;
    }
};