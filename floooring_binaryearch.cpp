#include<iostream>
using namespace std;
int flooring(int a[],int n,int target){
    int s=0;
    int e=n-1;
    // if target is smaller thant the smallest no, in array than we return end which will be -1
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==target) return mid;
        else if(a[mid]>target) e=mid-1;
        else s=mid+1;
    }
    return e;
}
int main(){
    int a[]={2,3,5,9,14,16,18};
    int n=sizeof(a)/sizeof(int);
    int target =10;
    
    //Find the greatest number <= target
    
    cout<<flooring(a,n,target)<<endl;
    
}