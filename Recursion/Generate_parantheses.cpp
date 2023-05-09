#include<iostream>
using namespace std;
void solve(char* s,int n,int i,int o,int c){
    if(i==2*n){
        s[i]='\0';
        for(int j=0;s[j]!='\0';j++){
        cout<<s[j];
        }
        cout<<endl;
        return ;
    }
    
    if(o<n){
        s[i]='(';
        solve(s,n,i+1,o+1,c);
    }
    if(c<o){
        s[i]=')';
        solve(s,n,i+1,o,c+1);
    }


}
int main(){
    char s[100];
    int n;
    cin>>n;
   solve(s,n,0,0,0);
    
}