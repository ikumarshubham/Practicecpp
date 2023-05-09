
/*
here important point is that is s1+s2!= s2+s1 then there is no such string that will divide both the strings
another is that longest substrin will be the gcd of the string lengths 
after finding the gcd we will return sub string of gcd length;
*/


int gcd(int n1,int n2){
    if(n1%n2==0)return n2;
    return gcd(n2,n1%n2);
}

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
       
        if(str1+str2!=str2+str1) return "";
        int n1=str1.length();
        int n2=str2.length();
        
        int ans=1;
        
        if(n1<n2 ){
           ans= gcd(n2,n1);
        }
        else {
        ans= gcd(n2,n1);
        }
        return str1.substr(0,ans);
    }
};
