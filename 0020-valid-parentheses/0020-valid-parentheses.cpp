class Solution {
public:
    bool isValid(string s) {
        int size=s.size();
        stack<char>s1;
        for(int i=0;i<size;i++){
            char ch=s[i];
            if(ch=='(' || ch=='[' || ch=='{'){
                s1.push(ch);
            }
            else if(s1.empty()){
                return false;

            }
            else if((ch==')'&& s1.top()!='(') || (ch==']'&& s1.top()!='[') || (ch=='}'&& s1.top()!='{') ){
                return false;
            }
             else{
                s1.pop();
             }
            
        }
        return s1.empty();
    }
};