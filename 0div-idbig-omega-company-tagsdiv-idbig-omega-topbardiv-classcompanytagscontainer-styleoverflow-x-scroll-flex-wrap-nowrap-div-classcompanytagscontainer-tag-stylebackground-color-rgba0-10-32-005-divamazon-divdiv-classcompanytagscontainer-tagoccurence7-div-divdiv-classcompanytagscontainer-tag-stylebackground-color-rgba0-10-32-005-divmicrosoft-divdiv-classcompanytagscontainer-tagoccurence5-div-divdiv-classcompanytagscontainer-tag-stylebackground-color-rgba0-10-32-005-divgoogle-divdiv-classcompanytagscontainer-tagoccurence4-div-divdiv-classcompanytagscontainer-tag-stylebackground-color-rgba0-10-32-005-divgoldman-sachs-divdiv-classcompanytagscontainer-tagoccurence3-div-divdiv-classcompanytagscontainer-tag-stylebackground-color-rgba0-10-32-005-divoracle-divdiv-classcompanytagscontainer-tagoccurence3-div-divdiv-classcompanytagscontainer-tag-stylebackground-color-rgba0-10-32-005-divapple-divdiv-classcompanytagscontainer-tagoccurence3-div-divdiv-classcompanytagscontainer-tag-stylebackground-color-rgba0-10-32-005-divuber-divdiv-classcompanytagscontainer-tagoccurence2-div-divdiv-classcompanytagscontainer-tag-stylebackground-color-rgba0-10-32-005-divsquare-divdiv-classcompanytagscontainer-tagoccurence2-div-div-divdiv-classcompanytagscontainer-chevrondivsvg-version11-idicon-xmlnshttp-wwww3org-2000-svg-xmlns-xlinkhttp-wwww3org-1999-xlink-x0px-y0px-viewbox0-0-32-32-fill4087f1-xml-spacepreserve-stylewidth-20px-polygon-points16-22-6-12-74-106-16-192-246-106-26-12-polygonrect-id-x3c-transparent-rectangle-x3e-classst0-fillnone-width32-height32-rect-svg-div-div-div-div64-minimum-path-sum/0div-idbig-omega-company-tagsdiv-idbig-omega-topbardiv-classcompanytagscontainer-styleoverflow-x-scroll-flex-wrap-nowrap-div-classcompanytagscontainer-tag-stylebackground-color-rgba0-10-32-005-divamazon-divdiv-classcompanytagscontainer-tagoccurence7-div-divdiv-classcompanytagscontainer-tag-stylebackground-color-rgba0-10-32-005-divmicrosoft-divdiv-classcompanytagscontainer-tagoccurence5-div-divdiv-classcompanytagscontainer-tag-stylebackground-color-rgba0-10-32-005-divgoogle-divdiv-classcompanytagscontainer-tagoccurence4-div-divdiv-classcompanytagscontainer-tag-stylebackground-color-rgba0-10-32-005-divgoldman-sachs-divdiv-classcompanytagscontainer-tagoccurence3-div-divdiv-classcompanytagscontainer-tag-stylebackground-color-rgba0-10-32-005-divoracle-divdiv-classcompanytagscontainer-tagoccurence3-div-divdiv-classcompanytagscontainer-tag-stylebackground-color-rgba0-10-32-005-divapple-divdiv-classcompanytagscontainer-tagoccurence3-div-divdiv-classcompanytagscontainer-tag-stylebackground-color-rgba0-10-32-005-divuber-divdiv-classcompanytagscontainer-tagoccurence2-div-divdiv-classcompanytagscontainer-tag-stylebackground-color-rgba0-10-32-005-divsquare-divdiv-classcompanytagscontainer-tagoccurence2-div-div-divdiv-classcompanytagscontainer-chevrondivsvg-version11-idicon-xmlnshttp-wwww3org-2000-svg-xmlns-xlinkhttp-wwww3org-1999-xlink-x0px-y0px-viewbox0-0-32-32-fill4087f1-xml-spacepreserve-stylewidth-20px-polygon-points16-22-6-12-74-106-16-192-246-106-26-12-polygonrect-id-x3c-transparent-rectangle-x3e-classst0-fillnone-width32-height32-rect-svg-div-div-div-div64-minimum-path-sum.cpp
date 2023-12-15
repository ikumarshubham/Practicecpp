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



// functions
ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = res * a % mod; a = a * a % mod; b >>= 1;} return res;}

//



//Template End

ll solve(vector<vi>&grid,vector<vi>&DP,ll m,ll n,ll i,ll j){
    
    if(i==m-1 and j==n-1){
        return grid[i][j];
    }
    
    if(i>=m or j>=n){
        return inf;
    }
    
    
    if(DP[i][j]!=-1)return DP[i][j];
    
    ll ans=grid[i][j];
    
    
    ans+=min(solve(grid,DP,m,n,i+1,j),solve(grid,DP,m,n,i,j+1));
    
    
    return DP[i][j]=ans;
    
    

    
    
    
}



class Solution {
public:
    
    int minPathSum(vector<vector<int>>& grid) {
        if(grid.size()==0)return 0;
        int m=grid.size();
        int n=grid[0].size();
        
        vector<vi>DP;

        for(int i=0;i<=m;i++){
            vi v;
            for(int j=0;j<=n;j++){
                v.pb(-1);
            }

            DP.pb(v);
        }
        
        
        return solve(grid,DP,m,n,0,0);
        
    }
};