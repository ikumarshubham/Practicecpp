//if array is defined or declared in global then all elements are by defualt 0
//max size 10^6 inside int main if globally then max size 10^7 we cannot predict the base address but corresponding address we can predict as 1st id would be x+1 memmory locations

#include<bits/stdc++.h>
using namespace std;
int second__largest(int *a,int n){
    int largest=a[0];//someone must be largest
    int second_largest=INT_MIN;
    for(int i=0;i<n;i++){
        if(a[i]>largest){
        second_largest=largest;
        largest=a[i];
        }
        else if(a[i]<largest && a[i]>second_largest){
            second_largest=a[i];
        }
    }

    return second_largest;
}


int second__smallest(int* a,int n){
    int smallest=a[0];
    int second_smallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            second_smallest=smallest;
            smallest=a[i];
        }
        else if(a[i]!=smallest && a[i]<second_smallest){
            second_smallest=a[i];
        }
    }

    return second_smallest;
}


int main(){
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
// //one approach
//O(2N)
//     int l=INT_MIN;
//     for(int i=0;i<n;i++){
//         l=max(l,arr[i]);
//     }

//   cout<<l;
// int sl=INT_MIN;
//   for(int i=0;i<n;i++){
//    if(arr[i]>sl && arr[i]<l){
//     sl=arr[i];
//    }
//   }

//   cout<<sl;

//Optimal approach 

cout<<second__largest(arr,n)<<endl;
cout<<second__smallest(arr,n)<<endl;

}