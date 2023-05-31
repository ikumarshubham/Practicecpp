class Solution {
public:
    bool rotateString(string s, string goal) {
       if(s.size()!=goal.size()){return false;}
       int n=s.size();
        for(int i=0;i<n;i++){
            string s1=s;
            
             rotate(s1.begin(), s1.begin() + i, s1.end());  
             if(s1==goal)return true;
           
        }
        return false;
        
    }
};