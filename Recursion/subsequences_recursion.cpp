#include<iostream>
using namespace std;
void subsequences(char *in,char*out,int i,int j){
    
    //base case
    if(in[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    
    //recursive case
    
    //ignore the ith character
    subsequences(in,out,i+1,j);
    
    //include the ith character int the output array
    
    out[j]=in[i];

    subsequences(in,out,i+1,j+1);
    
}
int main(){
    char in[]="abc";
    char out[100];
    subsequences(in,out,0,0);
    return 0;
    
}