#include<iostream>
using namespace std;
bool ratinamze(char maze[10][10],int soln[][10],int i,int j,int m,int n){
    if(i==m&&j==n){
        soln[i][j]=1;
        for(int i=0;i<=m;i++){
            for(int j=0;j<=n;j++){
                cout<<soln[i][j]<<" ";
                
            }
            cout<<endl;
        }
        cout<<endl;
        return true;
    }
    if(i>m || j>n){
        return false;
    }
    if(maze[i][j]=='X'){
        return false;
    }
    //assume soln exist through current cell
    soln[i][j]=1;
    bool rightsuccess=ratinamze(maze,soln,i,j+1,m,n);
    bool downsuccess=ratinamze(maze,soln,i+1,j,m,n);
    //backtracking
    soln[i][j]=0;
    if(rightsuccess||downsuccess){
        return true;
    }
    return false;
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
    bool ans=ratinamze(maze,soln,0,0,m-1,n-1);
    if(ans==false){
        cout<<"path dont exist"<<endl;
    }
    return 0;
    
}