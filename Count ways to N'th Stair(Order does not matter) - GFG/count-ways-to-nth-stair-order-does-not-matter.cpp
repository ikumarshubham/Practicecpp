//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
		int nthStair(int n){
		    //  Code here
		    vector<int>vec1(1000000,0);
		    
		    vec1[1]=1;
		    for(int i=2;i<=n;i+=2){
		        vec1[i]=vec1[i-1]+1;
		        vec1[i+1]=vec1[i];
		        
		        
		    }
		    
		    return vec1[n];
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		Solution ob;
		int ans  = ob.nthStair(n);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends