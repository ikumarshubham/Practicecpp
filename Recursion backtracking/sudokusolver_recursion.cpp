#include<iostream>
#include<cmath>
using namespace std;
bool canplace(int mat[][9],int i,int j,int n,int number){
    for(int x=0;x<n;x++){
        //row and column check
        if(mat[x][j]==number || mat[i][x]==number)return false;
    }
    int rn=sqrt(n);
    int sx=(i/rn)*rn;
    int sy=(j/rn)*rn;
    for(int x=sx;x<sx+rn;x++){
        for(int y=sy;y<sy+rn;y++){
            if(mat[x][y]==number)return false;
        }
    }
    return true;
}

bool solvesudoku(int mat[][9],int i,int j,int n){
    //base case
    if(i==n){
        //print the matrix
        for(int a=0;a<n;a++){
            for(int b=0;b<n;b++){
                cout<<mat[a][b]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    //case Row End;
    if(j==n)return solvesudoku(mat,i+1,0,n);
    //skip the pre filled cells
    
    if (mat[i][j]!=0) return solvesudoku(mat,i,j+1,n);
    
    //Recursive case
    //Fill the current cell with possible options
    for(int number =1;number<=n;number++){
        if(canplace(mat,i,j,n,number)){
            //Assume
            mat[i][j]=number;
            
            bool couldwesolve=solvesudoku(mat,i,j+1,n);
            if(couldwesolve == true)return true;
            
            
        }
    }
    
    //Backtrack here
    mat[i][j]=0;
    return false;
    
}
int main(){
    int mat[9][9]=
    {
        {5,3,0,0,7,0,0,0,0},
        {6,0,0,1,9,5,0,0,0},
        {0,9,8,0,0,0,0,6,0},
        {8,0,0,0,6,0,0,0,3},
        {4,0,0,8,0,3,0,0,1},
        {7,0,0,0,2,0,0,0,6},
        {0,6,0,0,0,0,2,8,0},
        {0,0,0,4,1,9,0,0,5},
        {0,0,0,0,8,0,0,7,9},
    };
    
    solvesudoku(mat,0,0,9);
    return 0;
}