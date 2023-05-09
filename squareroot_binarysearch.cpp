#include<iostream>
using namespace std;
float squareroot(int n){
    int s=0;
    int e=n;
    float ans=-1;
    while(s<=e){
        int mid=(s+e)>>1;
        
        if(mid*mid==n) return mid;
        else if(mid*mid<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        
    }
    float inc=0.1;
    for(int times=1;times<=3;times++){
        while(ans*ans<=n){
            ans+=inc;
        }
        ans-=inc;
        inc/=10;
    }
    
    return ans;
    
}
int main(){
    
    int n;
    cin>>n;
    cout<<squareroot(n);
    
}