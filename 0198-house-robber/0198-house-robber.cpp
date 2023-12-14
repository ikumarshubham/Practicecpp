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

const ll N=1000005;



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
    
    int solve(ll n,vector<int> nums,vi& DP){
        if(n<0)return 0;
        if(n==0)return nums[0];
        
        
        if(DP[n]!=-1)return DP[n];
        
        
        int p=nums[n]+solve(n-2,nums,DP);
        int np=solve(n-1,nums,DP);
        
        int ans=max(p,np);
        
        return DP[n]=ans;
        
    }
    
    int rob(vector<int>& nums) {
        
       int n=nums.size();
        
        vi DP(N);
        
        for(int i=0;i<=n+10;i++){
            DP[i]=-1;
        }
        
        return solve(n-1,nums,DP);
    }
};