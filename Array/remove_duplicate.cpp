#include<bits/stdc++.h>
using namespace std;

int remove_duplicate(int* a,int n){
    int i=0,j=i+1;
    for(;j<n;j++){
        if(a[i]!=a[j]){
            i++;
            swap(a[i],a[j]);
        }
    }
    return i+1;
}

int main(){
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

int k=remove_duplicate(arr,n);
cout<<k<<endl;
for(int i=0;i<k;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;

}