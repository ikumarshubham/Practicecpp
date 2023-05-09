#include<iostream>
using namespace std;
int partion(int a[],int s,int e){
    int j=s;
    int i=s-1;
    int pivot=a[e];
    for(;j<=e-1;j++){
        if(a[j]<=pivot){
            i++;
            swap(a[j],a[i]);
        }
    }
    swap(a[i+1],a[e]);
    return i+1;
}
void quick_sort(int a[],int s,int e){
    if(s>=e)return ;
    int p=partion(a,s,e);
    quick_sort(a,s,p-1);
    quick_sort(a,p+1,e);
}
int main(){
    
    int a[100];
    int n=5;
      for(int i=0;i<n;i++)cin>>a[i];
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++)cout<<a[i]<<" ";
    
}