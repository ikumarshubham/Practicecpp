#include<iostream>
using namespace std;
bool issafe(char maze[10][10],int soln[][10],int i,int j,int m,int n){
    if(i>m || j>n)return false;
    if(maze[i][j]=='X'||soln[i][j]==1)return false;
    return true;
}
void ratinamze(char maze[10][10],int soln[][10],int i,int j,int m,int n){
    if(i==m-1&&j==n-1){
        soln[i][j]=1;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cout<<soln[i][j]<<" ";
                
            }
            cout<<endl;
        }
        cout<<endl;
        
    }
    
    //assume soln exist through current cell
    soln[i][j]=1;
    int newi=i;
   int newj=j+1;
   //right 
   if(issafe(maze,soln,newi,newj,n,m)){
       ratinamze(maze,soln,newi,newj,m,n);
   }
   //
   //down
   newi=i+1;
   newj=j;
   if(issafe(maze,soln,newi,newj,n,m)){
       ratinamze(maze,soln,newi,newj,m,n);
   }
   
    //backtracking
    soln[i][j]=0;
   
}
int main(){
    
    char maze[10][10]={
                       "0000",
                       "00X0",
                       "000X",
                       "0X00",
    };
    int soln[10][10]={0};
    int m=4,n=4;
    ratinamze(maze,soln,0,0,m,n);
    
    return 0;
    
}