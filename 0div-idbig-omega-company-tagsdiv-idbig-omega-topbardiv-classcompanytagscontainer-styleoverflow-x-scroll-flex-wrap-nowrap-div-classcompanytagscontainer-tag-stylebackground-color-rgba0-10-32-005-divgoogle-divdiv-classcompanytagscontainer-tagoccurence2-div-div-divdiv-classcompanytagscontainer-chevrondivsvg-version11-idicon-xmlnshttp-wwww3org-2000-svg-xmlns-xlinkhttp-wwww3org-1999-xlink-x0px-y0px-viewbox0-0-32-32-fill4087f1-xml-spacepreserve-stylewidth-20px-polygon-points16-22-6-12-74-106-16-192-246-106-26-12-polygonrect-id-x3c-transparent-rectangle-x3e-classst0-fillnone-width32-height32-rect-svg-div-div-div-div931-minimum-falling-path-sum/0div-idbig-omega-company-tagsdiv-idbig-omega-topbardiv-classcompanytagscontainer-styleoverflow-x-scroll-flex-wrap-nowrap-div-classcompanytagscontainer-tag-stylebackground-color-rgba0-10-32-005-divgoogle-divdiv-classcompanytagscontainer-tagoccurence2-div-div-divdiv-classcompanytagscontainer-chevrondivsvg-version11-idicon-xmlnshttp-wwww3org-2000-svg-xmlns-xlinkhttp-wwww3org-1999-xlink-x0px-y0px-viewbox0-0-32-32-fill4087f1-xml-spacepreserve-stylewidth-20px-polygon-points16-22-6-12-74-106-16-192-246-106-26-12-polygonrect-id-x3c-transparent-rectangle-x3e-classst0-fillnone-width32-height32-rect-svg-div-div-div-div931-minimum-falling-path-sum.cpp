#include<bits/stdc++.h>
using namespace std;


//Template 
#define ll long long 
#define max1(a,b,c) max(a,max(b,c))
#define pb push_back
#define pop1 pop_back

typedef vector<int> vi;

#define inf 1000000000000000005


class Solution {
public:
    
    
    

ll solve(vector<vi>& matrix,ll i,ll j,vector<vi>&DP){
     if(i>=matrix.size())return inf;
      if(j<0 || j>=matrix[i].size())return inf;
  if(i==matrix.size()-1)return matrix[i][j];
 



  if(DP[i][j]!=INT_MIN)return DP[i][j];


  ll ans =matrix[i][j];
 

  ll op1=solve(matrix,i+1,j-1,DP);
  
  ll op2=solve(matrix,i+1,j,DP);

  ll op3=solve(matrix,i+1,j+1,DP);


  ans=ans+min(op1,min(op2,op3));
  return DP[i][j]= ans;


}



    
    
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        ll n = matrix.size();
        ll m = matrix[0].size();
        
        vector<vi> DP;
        for(int i=0;i<n;i++){
              vi v1(m);
              for(int j=0;j<m;j++){
                  v1[j]=INT_MIN;
                  }
            DP.pb(v1);
            }
        
        ll ans=inf;

        for(int j=0;j<m;j++){
            ans=min(ans,solve(matrix,0,j,DP));
         }
        
        return ans;
        
        
    }
};