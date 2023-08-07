class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            if(s[i]==')'){
                int cnt=st.size();
                st.pop();
                maxi=max(cnt,maxi);
            }
        }
        
        return maxi;
    }
};