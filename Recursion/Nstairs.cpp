#include<iostream>
using namespace std;
int solve(int n,int k){
    if(n<0)return 0;
    if(n==0||n==1)return 1;
  int ans=0;
  for(int i=1;i<=k;i++){
    ans+=solve(n-i,k);
  }
  return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    cout<<solve(n,k)<<endl;
    
}