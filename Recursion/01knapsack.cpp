#include<iostream>
using namespace std;
int solve(int*p,int*w,int n,int c){
if(n==0||c==0)return 0;

int in=0,ex=0;

if(w[n-1]<=c){
in=p[n-1]+solve(p,w,n-1,c-w[n-1]);
}

ex=solve(p,w,n-1,c);
  int ans=max(in,ex);
  return ans;

}
int main(){
int p[]={40,20,30,100};
int w[]={1,2,3,5};

cout<<solve(p,w,4,7);
}