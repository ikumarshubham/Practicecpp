#include<iostream>
using namespace std;
int merge(int *a,int s,int e){
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];
    int cnt=0;
    while(i<=mid && j<=e){
        if(a[i]<=a[j]){
            temp[k++]=a[i++];
        }
        else{
            temp[k++]=a[j++];
            cnt+=mid-i+1;
        }
    }
    while(i<=mid){
        temp[k++]=a[i++];
        
    }
    while(j<=e){
        temp[k++]=a[j++];
    } 
    for(int i=s;i<=e;i++){
        a[i]=temp[i];
    }
    return cnt;
}
int inversion(int *a,int s,int e){
    if(s>=e){
    return 0;
}
    int mid=(s+e)/2;
    int x=inversion(a,s,mid);
    int y=inversion(a,mid+1,e);
    int z=merge(a,s,e);
    return x+y+z;
}
int main (){
    int a[]={1,5,2,6,3,0};
    int n=6;
    cout<<inversion(a,0,n-1);
    return 0;
    
}