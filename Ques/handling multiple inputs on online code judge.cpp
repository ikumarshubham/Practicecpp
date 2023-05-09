#include <iostream>
using namespace std;
int main(){
   
   //handling multiple inputs
   
   int N;
   cin>>N;
   
   int no;
   
   while(N>0){
       cin>>no;
         /* we have written this inside the loop because we are continously taking inputs while our loo[p is running .
            if we have written this outside the loop then N keeps on updating but we cant take inputs of no more than 1 .
            so we do this thats why we are able to take inputs till loop is running.
                    */
       
       cout<<no*no<<endl;
       
       N = N - 1;
       
      
   }
   
   
    return 0;
    
}