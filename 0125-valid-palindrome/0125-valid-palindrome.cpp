class Solution {
public:
    bool isPalindrome(string s) {
        vector<char>s1;
      
        for(int i=0;s[i]!='\0';i++){
            char x=s[i];
            if((x>='a'&& x<='z') || (x>='0' && x<='9')){
                s1.push_back(x);
               
            }
            else if(x>='A'&& x<='Z'){
               char ch=x;
                ch+=32;
                s1.push_back(ch);
            }
            else{
                continue;
            }
            
        }
        vector<char>s2(s1.begin(),s1.end());
        
        reverse(s1.begin(),s1.end());
        if(s2==s1)return true;
        return false;
        
    }
};