#include<iostream>
using namespace std ;
bool issafe(int board[][10],int i,int j,int n){
    //you can check for row
    
    // for(int k=0;k<n;k++){
    //     if(board[i][k]==1){
    //         return false;
    //     }
    // }
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

    // if none of the above checks return false means we are at safe position
    // we have checked for columns, left and right diagonals

    return true;

}
bool solveNQueen(int board[][10],int i,int n){
//Base case
if(i==n){
    //you have successfull placed queensin n rows (0...n-1)
    //Print thre board
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(board[i][j]==1)cout<<"Q  ";
            else cout<<"_ ";

        }
        cout<<endl;
    }

    cout<<endl<<endl;

    //if in base case we return false instead of true
    //it will continue to search for the next valid configuration 
    //but since in base case we already printed that configuration so we get all the possible configurations
    //return true; just give only one configuration

    return false;

}
// recursive case 
// Try to put the queen in the current row and call on the remaing part which will be solved by recursion

for(int j=0;j<n;j++){
    // cant placed the queen blindly we have to the whether its safe or not
    // we have to check on column right and left diagonal but not on down because we have done it row by row
    //for Left daigonal its i-1 and j-1 and for right diagonal its i-1 and j+1
    
    if(issafe(board,i,j,n)){
        //place the queen- asssuming i,j is the right position
        board[i][j]=1;
        bool nextqueenrakhpaaye=solveNQueen(board,i+1,n);
       // if we return false in base case then this will never get executed thus we get all configuration
       
        if(nextqueenrakhpaaye==true)return true;

        // means i,j not the right position assumption is wrong
        board[i][j]=0; // back track
           
    }

}

// you tried all the positions in the current row but could not place the queen

return false;

}
int main(){
    int n;
    cin>>n;
    int board[10][10]={0};
    solveNQueen(board,0,n);
    return 0;

    //for 4X4 we get mirror image
    // returning false gives all configurations
}