#include <iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int row = 1;
    while(row<=n){
    
    int col = 1; // we write this inside while loop because our next while loops are based on col and we have to set them again again to 1.
    
    if(row%2!=0){
        
        // odd row
        
        while(col<=row){
        cout<<1;
        col = col + 1;
        }
        
    }
    
    else{
        
        //even row
        
        cout<<1;
        
        while(col<=row-2){
        
            cout<<0;
            col = col + 1;
        }
        
        cout<<1;
        
    }
        
    cout<<endl;
    
    row = row + 1;
        
    }
    
    return 0;
    
}