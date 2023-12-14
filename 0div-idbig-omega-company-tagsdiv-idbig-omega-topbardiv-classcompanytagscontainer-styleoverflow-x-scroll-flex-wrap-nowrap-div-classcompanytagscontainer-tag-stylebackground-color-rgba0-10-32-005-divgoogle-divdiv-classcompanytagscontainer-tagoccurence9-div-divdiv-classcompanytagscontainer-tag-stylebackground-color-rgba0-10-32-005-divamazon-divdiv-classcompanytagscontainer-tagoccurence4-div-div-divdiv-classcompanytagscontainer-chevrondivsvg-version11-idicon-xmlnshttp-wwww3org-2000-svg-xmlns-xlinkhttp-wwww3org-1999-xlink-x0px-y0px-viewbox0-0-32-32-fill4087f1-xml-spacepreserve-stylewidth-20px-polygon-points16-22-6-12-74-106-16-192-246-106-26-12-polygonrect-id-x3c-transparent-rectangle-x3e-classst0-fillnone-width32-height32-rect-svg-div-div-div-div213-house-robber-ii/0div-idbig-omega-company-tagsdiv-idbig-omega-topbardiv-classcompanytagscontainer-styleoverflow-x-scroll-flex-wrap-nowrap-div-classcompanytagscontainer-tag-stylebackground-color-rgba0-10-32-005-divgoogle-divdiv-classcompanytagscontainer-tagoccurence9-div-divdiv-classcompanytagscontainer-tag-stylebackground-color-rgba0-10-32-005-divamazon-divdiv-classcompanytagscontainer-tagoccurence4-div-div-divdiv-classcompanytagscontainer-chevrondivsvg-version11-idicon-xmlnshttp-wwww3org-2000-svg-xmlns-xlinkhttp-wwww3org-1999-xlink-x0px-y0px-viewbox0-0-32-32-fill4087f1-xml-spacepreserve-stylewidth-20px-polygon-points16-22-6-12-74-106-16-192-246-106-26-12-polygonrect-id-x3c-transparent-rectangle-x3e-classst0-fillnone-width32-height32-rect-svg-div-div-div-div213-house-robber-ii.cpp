#include<bits/stdc++.h>
using namespace std;


//Template 
#define ll long long 
#define max1(a,b,c) max(a,max(b,c))
#define pb push_back
#define pop1 pop_back
#define umap unordered_map
#define uset unordered_set
#define lb lower_bound
#define ub upper_bound
#define all(v) (v).begin(),(v).end()
#define sort0(v) sort(all(v))
#define sort0(v) sort(all(v))
#define lower(s)  for (auto& x : s) { x = tolower(x); } 
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;

const long long mod = 1e9 + 7;
#define inf 1000000000000000005

const ll N=10005;




class Solution {
public:
    int solve1(ll n,vector<int> nums,vi& DP){
        if(n<0)return 0;
        if(n==0)return 0;
        
        
        if(DP[n]!=-1)return DP[n];
        
        
        int p=nums[n]+solve1(n-2,nums,DP);
        int np=solve1(n-1,nums,DP);
        
        int ans=max(p,np);
        
        return DP[n]=ans;
        
    }
    
    int solve2(ll n,vector<int> nums,vi& DP){
        if(n<0)return 0;
        if(n==0)return nums[0];
        
        
        if(DP[n]!=-1)return DP[n];
        
        
        int p=nums[n]+solve2(n-2,nums,DP);
        int np=solve2(n-1,nums,DP);
        
        int ans=max(p,np);
        
        return DP[n]=ans;
        
    }
    int rob(vector<int>& nums) {
        
        int n=nums.size();
        if(n==0)return 0;
        
        if(n==1)return nums[0];
        
        
        vi DP(N);
        
        for(int i=0;i<=n+10;i++){
            DP[i]=-1;
        }
        
        int p=solve1(n-1,nums,DP);
        
        
        for(int i=0;i<=n+10;i++){
            DP[i]=-1;
        }
        
        int np=solve2(n-2,nums,DP);
        
        return max(p,np);
        
    }
};