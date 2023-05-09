#include<iostream>
using namespace std;
bool parata(int a[],int n,int p,int mid){
    int ans=0;
    for(int i=0;i<n;i++){
        int times =a[i];
        //we are doing this because we have to evalute the time for 1 parata first
        int j=2;

        while(times<=mid){
            
            ans++;
            times+=j*a[i];
            j++;
        }
        if(ans>=p)return true;
    }
    return false;
}
int main(){
    int p=10;
    int a[]={1,2,3,4};
    int n=4;
    int e=0;
    for(int i=1;i<=p;i++)
     e+=i*a[n-1];
    
    int s=0;
    int ans=0;
    while(s<=e){
        int mid=(s+e)/2;
        if(parata(a,n,p,mid)){
            ans=mid;
            e=mid-1;
        }
        else {
            s=mid+1;
        }
        
    }
    cout<<ans;
    
}