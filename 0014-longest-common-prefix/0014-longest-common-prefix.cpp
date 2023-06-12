bool compare(string a ,string b){
    return a.size()<b.size();
}
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans="";
        if(strs.size()==1){
            string s1=strs[0];
            return s1;
        }
        sort(strs.begin(),strs.end(),compare);
        int i=0,j=0;
        while(strs[0][i]!='\0' && strs[1][j]!='\0'){
            if(strs[0][i]==strs[1][j]){
                ans+=strs[0][i];
                i++;
                j++;
            }
            else break;
        }
        cout<<ans<<endl;
        if(ans=="")return "";
        
        for(int i=2;i<strs.size();i++){
            int k=0;int j=0;
            if(strs[i]=="")return "";
            while(ans[j]!='\0' and strs[i][k]!='\0'){
                if(ans[0]!=strs[i][0])return "";
                if(ans[j]==strs[i][k]){
                    k++;j++;
                    continue;
                }
                else if(ans[j]!=strs[i][j]){
                    ans=ans.substr(0,j);
                    break;
                }
            }
        }
        return ans;
        
    
    }
};