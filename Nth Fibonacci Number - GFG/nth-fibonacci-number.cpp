//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        long long int a=0,b=1,c;
        
        if(n==1){
            return 0;
        }
        if(n==2){
            return 1;
            
        }
        
        for(int i=2;i<=n;i++){
            c=a+b;
           c= c%1000000007;
            a=b;
            a=a%1000000007;
            b=c;
        }
        
        
        return c%1000000007;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends