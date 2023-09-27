//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void solve(vector<int>& vec1,vector<int>ans,vector<int>&finalans,int n,int i){

        if(i==n){
            int sum=0;
            for(int k=0;k<ans.size();k++){
                sum+=ans[k];
            }

            finalans.push_back(sum);
            return;
        }

        ans.push_back(vec1[i]);
        solve(vec1,ans,finalans,n,i+1);
        ans.pop_back();
        solve(vec1,ans,finalans,n,i+1);






   
} 
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ans;
        vector<int>finalans;
        solve(arr,ans,finalans,N,0);
        return finalans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends