char key[][10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
class Solution {
public:
   // char key[][10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void solve(string digits,string s, vector<string>& ans,int i,int j){
        if(digits[i]=='\0'){
            ans.push_back(s);
            return;
        }
        int digit=digits[i]-'0';
        for(int k=0;key[digit][k]!='\0';k++){
            s.push_back(key[digit][k]);
            solve(digits,s,ans,i+1,j+1);
            s.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int n=digits.length();
        if(n==0)return ans;
        string s="";
        solve(digits,s,ans,0,0);
        return ans;
    }
};