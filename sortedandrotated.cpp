#include<iostream>
using namespace std;
// this dont work for array with duplicate elements;
int find_key(int *a,int n,int key){
    int s=0;
    int e=n-1;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key){
            return mid;
        }
       else if(a[s]<=a[mid]){
           if(key>=a[s] && key<=a[mid]) e=mid-1;
           else s=mid+1;
           
       }
       else if(a[mid]<=a[e]){
           if(key>=a[mid]&&key<=a[e]){
               s=mid+1;
           }
           else e=mid-1;
       }
    }
    return -1;
}
int main(){
    int a[]={5,4,1,2,3};
    int n=5;
    cout<<find_key(a,n,5);
    
    return 0;
    
}