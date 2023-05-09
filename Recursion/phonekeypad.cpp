#include<iostream>
using namespace std;
char keypad[][10]={"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
void solve(char*in,char* out,int i,int j){
    if(in[i]=='\0'){
        out[j]='\0';
   cout<<out<<endl;
        return ;}

    int d=in[i]-'0';

    if(d==0 || d==1){
    solve(in,out,i+1,j);
    }
 
  for(int k=0;keypad[d][k]!='\0';k++){
        out[j]=keypad[d][k];
        solve(in,out,i+1,j+1);
    }

}
int main(){

    char in[100],out[100];
    cin>>in;

    solve(in,out,0,0);
    
    return 0;

}