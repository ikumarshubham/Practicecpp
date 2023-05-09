#include<iostream>
using namespace std;
int main(){
  char ch;
  int x=0;
  int y=0;
  
  ch=cin.get();
  while (ch!='\n'){
      
      if(ch=='N'){
          y++;
      }
      
      else if (ch=='S'){
          y--;
      }
      
      else if(ch=='E'){
          x++;
          
      }
      
      else{
          x--;
      }
      
     ch=cin.get();
      
      
  }
    
     cout<<"Final displacement "<<x<<" "<<y<<endl;
     if(x>0){
         while(x>0){
             cout<<"E";
             x--;
         }
     }
         if (y>0){
             while(y>0){
                 cout<<"N";
                 y--;
             }
         }
         
         if(x<0){
            while(x<0){
             cout<<"W";
             x++;
            }
         }
         if(y<0){
             while (y<0){
                 cout<<"S";
                 y++;
             }
         }
         
     
 return 0;
  
}