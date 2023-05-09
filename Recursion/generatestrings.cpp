#include<iostream>
using namespace std;
void solve(char* in,char* out,int i,int j){
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    int n1=in[i]-'0';
    out[j]=n1+'A'-1;
    solve(in,out,i+1,j+1);

    if(in[i+1]!='\0'){
        int n2=in[i+1]-'0';
        int no=n1*10+n2;
        if(no<=26){
            out[j]=no+'A'-1;
            solve(in,out,i+2,j+1);
        }
    }
}
int main(){
    char in[100],out[100];
    cin>>in;
    solve(in,out,0,0);

    return 0;

}