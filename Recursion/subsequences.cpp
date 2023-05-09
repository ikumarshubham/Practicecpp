#include<iostream>
using namespace std;
int ans=0;
void solve(int n,char src,char helper,char dest){
   if(n==0)return;
   solve(n-1,src,dest,helper);
   cout<<"shift "<<n<<" from "<<src<<" to "<<dest<<endl;
   ans++;
   solve(n-1,helper,src,dest);

}
int main(){
   int n;
   cin>>n;

   solve(n,'A','B','C');
   cout<<ans<<endl;
   return 0;


}