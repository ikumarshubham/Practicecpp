

//Bitset Approach //

//we can make issafe check in O(1) time 
//we can check if we can place the queen in O(1)time for each x,y 
// we are trying to place queens in each row that is 1 queen in each row
// can be place in NC1 ways in all rows we have NC1 ways
// so tota NC1*NC1*..till n time..NC1 and NC1 is nothing but N 
// so N multiplied with N n times it would be N^N 


// we will make optimizations only in issafe function
// when we check in column and the diagonal these iterations take O(N)time and we want to bring this complexity to O(1)
// we maintain a boolean array for the columns so we can search in O(1) time 
// the space complexity is just o(N) and even same when we do backtracking due to recursion callstack so in a way space complexity is not increasing but we reduced the timecimplexcity


//  for right diagona
//   we can use one property that is along the diagonal i+j is same so we can make another array and reduce the time complecityto O(1)
//that is if we place any queen at i,j we can mark false at i+j in the array which means it will block the i+j diagonal
// so to check i,j check whether i+j diagonal is free or not 
// this diagonal checck can be done in O(1)time

//for left diagonal
//now for the left diagonala the diffrence is same for each elemnent in the diagonal that is i-j remains same
// that ranges between -3 to 3 because if its at 2,2 then right will check for 4,0 and for 4,4, left will check so all will be covered
// since we cant have any index of array with negative no. so map -3 with 0 and 3 with 6
//i-j+n-1  this is shiting for negative 

//keep 3 arrays one for left diagonal ,one for right diagonal and one for columns

// we can use bitset bit set is like array.,its a array bits its a class in C++ and its memory efficient
// if its array of 30 bits it will acqquire total memory of only 30 bits 
// but if we make a array suppose of boolean type then 1 boolean is 8 bits so array of 30 boolean means 30*8=240 so we use bit set
#include<iostream>
#include<bitset>
using namespace std ;
bitset<30> col,d1,d2;

void solve(int r,int n,int &ans){
    if(r==n){
        //print the board array
        // for(int i=0;i<n;i++){
        //     for(int j=0;j<n;j++){
        //         cout<<board[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        // cout<<endl;
    ans++; // sincce ans is passed by refrence when we hit the base case we increment it
    return ;
    }
   // trying to place queen at every column in a current row and 
   for(int c=0;c<n;c++){
    // here we are checking whether we are safe of placing the column or not
    //so we  are checking for column left diagonal and right diagonal respectively

    if(!col[c]&& !d1[r-c +n-1] && !d2[r+c]) {
        // if safe then we place queen there and mark it 1
         // 1 means booked 
        col[c]=d1[r-c+n-1]=d2[r+c]=1;
        //board[r][c]=1;
       
        // call for the next row  
        solve(r+1,n,ans);
        //and then during backtrack after the call we unset that bit or unplace the queen
        //remove thye queen for which you have already counted the ways;
        //0 means avialable 
         col[c]=d1[r-c+n-1]=d2[r+c]=0;
         //board[r][c]=0;
    }
   }
}


int main(){
    int n;
    cin>>n;
    int ans=0;
    //int board[20][20]={0};
    //to print the board we can  pass the board array also
    solve(0,n,ans);
    cout<<ans<<endl;
    return 0;  
}

// the new time complexity would be 1/N times of previous time complexity

