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





ll solve(string& text1,string& text2,ll i,ll j,vector<vi>&DP){
    
    if(i ==0 or j==0)return 0;
    
    if(DP[i][j]!=-1)return DP[i][j];
    
    
 

  if(text1[i-1]==text2[j-1]){ return DP[i][j]=1+solve(text1,text2,i-1,j-1,DP);}

  ll not_take1=solve(text1,text2,i-1,j,DP);
  ll not_take2=solve(text1,text2,i,j-1,DP);
  //ll not_take3=solve1(i-1,j-1);


  return DP[i][j]= max(not_take1,not_take2);

}



class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        ll m=text1.size();
        ll n=text2.size();
        
        vector<vi>DP;
        
        for(int i=0;i<=m+10;i++){
            vi v; 
            for(int j=0;j<=n+10;j++){
                v.pb(-1);
            }
            DP.pb(v);
        }
        
        
        return solve(text1,text2,m,n,DP);
        
        
        
    }
};