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




class Solution {
public:
    
    

ll solve(vector<vi>&triangle,ll i,ll j,vector<vi>&DP){
  if(i==triangle.size()-1)return triangle[i][j];
  if(i>=triangle.size())return inf;

  if(j>=triangle[i].size())return inf;

  if(DP[i][j]!=-1)return DP[i][j];


  ll ans = triangle[i][j];
  ans=ans+min(solve(triangle,i+1,j,DP),solve(triangle,i+1,j+1,DP));

  return DP[i][j]= ans;


}



    int minimumTotal(vector<vector<int>>& triangle) {
        
        ll n=triangle.size();
        
        
         vector<vi> DP;
         for(int i=0;i<n;i++){
         vi v1(i+1);
         for(int j=0;j<i+1;j++){
            v1[j]=-1;
          }
             DP.pb(v1);
     }
        
        
        return solve(triangle,0,0,DP);
        
        
        
    
    }
};