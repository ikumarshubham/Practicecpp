#include<iostream>
using namespace std ;
bool issafe(int board[][10],int i,int j,int n){
   
    for (int row=0;row<i;row++){
        if(board[row][j]==1)return false;
    }
    //check for left diagonal
    int x=i;
    int y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1)return false;
        x--;
        y--;
    }
    // you can check for right diagonal
    x =i;
    y =j;
    while(x>=0 && y<n){
        if(board[x][y]==1)return false;
        x--;
        y++;
    }  
    return true;

}
void solveNQueen(int board[][10],int i,int n){
//Base case
if(i==n){
    
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==1)cout<<"Q  ";
            else cout<<"_ ";

        }
        cout<<endl;
    }

    cout<<endl<<endl;
    
    // one way to count for the no. of combinations is that we make a global variable and increment it in base case 
    //and in main print it

    return;
}
// recursive case 

for(int j=0;j<n;j++){
    
    if(issafe(board,i,j,n)){
        board[i][j]=1;
        //this void function is trying to make all possible calls 
        //and does not check for the return value from the next function call
        solveNQueen(board,i+1,n);
       
        board[i][j]=0; // back track
           
    }

}
return;

}
int main(){
    int n;
    cin>>n;
    int board[10][10]={0};
    solveNQueen(board,0,n);
    return 0;  
}