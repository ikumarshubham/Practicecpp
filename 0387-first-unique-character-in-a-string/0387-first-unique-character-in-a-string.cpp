class Solution {
public:
    int firstUniqChar(string s) {
        
        int size=s.size();
        map<char,int>mpp;
        
        for(char ch:s){
            mpp[ch]++;
        }
        
        for(int i=0;i<size;i++){
            char ch=s[i];
            if(mpp[ch]==1){
                return i;
            }
        }
        
        return -1;
        
    }
};