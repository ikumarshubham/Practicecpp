#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int i;
    for(i=2;i<n;i++){
        
        if(n%i==0){
            cout<<n<<"is not Prime"<<endl;
            break;
        }
          
    }
    //Remember this check is important
    if(i==n){
        cout<<n<<"is Prime"<<endl;
    }
    
    
    
    
    
    
    
    return 0;
}