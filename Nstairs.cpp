#include<iostream>
using namespace std;
int stairs(int n){
    if(n==0)return 1;
    if(n<0)return 0;
    return stairs(n-1)+stairs(n-2)+stairs(n-3);
}
int Nstairs(int n,int k){
     if(n==0)return 1;
    if(n<0)return 0;
    int ans=0;
    for(int i=1;i<=k;i++){
        ans+=Nstairs(n-i,k);
    }
    return ans;
}
int main(){
    int n,k;
    cin>>n>>k;
    
    cout<<stairs(n)<<endl;
    
    cout<<Nstairs(n,k)<<endl;
    
}