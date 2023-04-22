 #include<iostream>
 #include<cmath>
 using namespace std;
 int n;
 int ans=0,DONE;
 
 void solve(int rowMask,int ld,int rd,int i,int board[][10],int z){
     
    //base case 
    if(rowMask == DONE){
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(board[i][j]==1)cout<<"Q ";
        else cout<<"_ ";
    }
    cout<<endl;
}
cout<<endl<<endl;
        ans++;
        return;
    }
    int safe=DONE & (~(rowMask | ld | rd));
    while(safe){
        int p=safe&(-safe);
        safe =safe-p;
        int k=z-log(p);
        board[i][k]=1;
        solve(rowMask | p,(ld |p)<<1,(rd|p)>>1,i+1,board,z);
         board[i][k]=0;
    }
    
 }

 int main(){
cin>>n;
DONE=((1<<n)-1);
int board[10][10]={0};
solve(0,0,0,0,board,3);
cout<<ans<<endl;
 }