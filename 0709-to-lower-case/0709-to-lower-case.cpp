class Solution {
public:
    string toLowerCase(string s) {
        
        int size=s.size();
        
        for(int i=0;i<size;i++){
            if(s[i]>='A' && s[i]<='Z' ){
               s[i]+=32;
               }
        }
               
               return s;
    }
};