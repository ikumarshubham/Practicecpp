class Solution {
public:
    string breakPalindrome(string palindrome) {
        
        if(palindrome.size()==1||palindrome.size()==0)return "";
        int n=palindrome.size();
//         string s1=palindrome;
//         int i;
// for( i=0 ;i<n;i++){
//     if(s1[i]!='a'){
//         char ch=s1[i];
//         s1[i]='a';
//         string s2=s1;
//         reverse(s2.begin(),s2.end());
//         if(s1==s2){
//             s1[i]=ch;
//             continue;
//         }
//         else if(s1!=s2){
//             break;
//         }
//                   }
   
// }
//        if(i==n)(s1[n-1]='b');
//         return s1;
        
        
        for(int i=0;i<n/2;i++){
            if(palindrome[i]!='a'){
                palindrome[i]='a';
                return palindrome;
                
            }
        }
        palindrome[n-1]='b';
        return palindrome;
    }
};