#include<iostream>
using namespace std;
int solve(int n,int ld){
    if(n==0)return  0;
    if(n==1 && ld==0)return 2;
    if(n==1 && ld==1)return 1;
    if(ld==0){
        return solve(n-1,0)+solve(n-1,1);
    }
    else if(ld==1){
        return solve(n-1,0);
 }
    


}
int main(){
int n;
cin>>n;
cout<<solve(n,0)<<endl;
}