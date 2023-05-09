#include<iostream>
using namespace std;
int celling(int a[],int n,int target){
    int s=0;
    int e=n-1;
    //if target is greater than greatest no. then no answer so return -1
    if(target>a[e]) return -1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==target) return mid;
        else if(a[mid]>target) e=mid-1;
        else s=mid+1;
    }
    return s;
}
int main(){
    int a[]={2,3,5,9,14,16,18};
    int n=sizeof(a)/sizeof(int);
    int target =1;
    
    //Find the smallest number >= target
    
    cout<<celling(a,n,target)<<endl;
    
}