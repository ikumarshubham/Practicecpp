//second largest and second smallest element in an array
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
    

cout<<second__largest(arr,n)<<endl;
cout<<second__smallest(arr,n)<<endl;

}