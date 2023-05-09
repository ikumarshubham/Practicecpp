#include <iostream>
using namespace std;
int main(){
    
    //binary to deciaml representation
    
    int N;
    cin>>N;
    int n;
    while(N>0){
        
        int p = 1;
        int ans = 0;
        cin>>n;
        
        while(n>0){
            int r = n%10;
            ans = ans + p*r;
            p = p*2;
            n = n/10;
        }
        
        cout<<ans<<endl;
        
        N = N - 1;
        
        
        
        
    }

    return 0;
    
}