#include<iostream>
using namespace std;

void alphabets (int n){
    for (int i=1;i<=n;i++){
       int alphabet_no=n-i+1;
        char alphabet='A';
        for(int j=1;j<=alphabet_no;j++){
            cout<<alphabet;
            alphabet=alphabet+1;
            
        }
        cout<<endl;
        
    }
    
}


int main (){
    
   int n;
   cin>>n;
   alphabets(n);
   
    return 0;
}
