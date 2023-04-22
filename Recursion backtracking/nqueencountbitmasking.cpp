 //we dont use three arrays instead we use three int one of left and one for right diagonal and one uis called row mask
 //instead of array we took an integer and since int have 32 bit so in any case n<=32
 //we cant have the backtracking solutions for very lage values of n max to max n=20 it will give us TLE
 //row mask will tell in which columns we placed the quuen how many columns are acuried as we want to cover all the columns that basically our base case
 //if all the columns are filled this is what the row mask will look like 1111 for n=4
 // and at any point of time we will see that our constraints are not violated that no queen cuts each queen
// in base case  check rowmask == done 
// DONE is given by DONE=((1<<n)-1)
//if n=4 the ((1<<n)-1)==16-1=15 
//it will give me a mask where last 4 bits are set 00001111
//we check that all colummns have been filled so our work is done and we increment aans by 1
//in the begning every thing rowmask ld and rd all are zero
// rowmask stores columns ld marks which are not safe 
// if in the first row and tried out this particular postion the we first generate a safe mask which tells us what positions are safe in the current row
// int safe=DONE & (~(rowMask | ld | rd));
//suppose place queen in the first row can you telll me what positions are not safe to place a queen in the second row according to the number if Q is at j=1 then in second row at 0,1,2 its not safe
// for this particular queen row mask was 00000 ld =000 and rd =0000
//  when the queen will be placed the this particular location the rowmask will become 0100 and ld will becon=me 
// let p is number denoting the position we picked in the current row.. then what will be the changes in the next row
//rowmask value for second will be   solve(rowMask | p,(ld |p)<<1,(rd|p)>>1);
// here we do OR of rowmask and p if rm=0000 and p=0100 then rm|p=0100 == the value of the rowmask
// here in second row 1st column is blocked 
// ld will store waht diagonals are block in the left  if we do OR b/w the ld of previous row and positon of current row and try to leftshift it by 1 it would give you the value 
// ld =00 p=0100 (ld|p)==0010<<1=1000 this means that this particular diagonal is blocked
//previous right diagonal | with position and rightshift by 1 ( rd|p)>>1
//(0000 |0100 )>>1 = 0010 means this rightdiagonal is blocked
//p=0100 ld=1000 rd=0010
//int safe=DONE & (~(rowMask | ld | rd));
//and if youwant to check what all postions are safe then want to do OR of all of them this gives 1110 
// 1110 this means that all the positions where 1 its blocked and we are taking not(~ ) because we want to say put 1 at those positins which are safe
// so safe mask will contain value 0001 and we have done AND with DONE variable so to make sure remaing 28 bits are 0 so AND with DONE
//0000001111 & 10101 1011 on;y last 4 bits is what we need and the remaing we dont care
//intresrting approach to find out setbits
// before , we used to check for all columns brfore placing the queen 
//but now here we have mask that is being generated in order 1 time and we dont need to iterate a over all the bits of the mask because we know mechanism to find the bits from the mask directly without iterating over all the bits 
// in bits masking there is away to go over the set bits without going through the bits which are 0 
// in earlier we used to iterate over each column which took n time N.N so we roughly N^2 time 
//in second approach we went to each column and solved for eachh column in order 1 time so we still took order N time for each row 
// in 3 approach we only place the Queen in that column which are safe we directly come to know which columns are safe or not with the help of safe mask
//suppose N=9=1001 and we have to find out the position which are safe 
//p=0001 p=1000 we need two iteration of the loop to get 2 position
// effect of all previous queens will propogate on the new queens so it will propogate on step in new row
 

 
 
 
 
 
 
 
 #include<iostream>
 using namespace std;
 int n;
 int ans=0,DONE;
 
 void solve(int rowMask,int ld,int rd){
     
    //base case 
    if(rowMask == DONE){

        ans++;
        return;
    }
    int safe=DONE & (~(rowMask | ld | rd));
    while(safe){
        int p=safe&(-safe);
        safe =safe-p;
        
        solve(rowMask | p,(ld |p)<<1,(rd|p)>>1);

    }
 }

 int main(){
cin>>n;
DONE=((1<<n)-1);
solve(0,0,0);
cout<<ans<<endl;
 }