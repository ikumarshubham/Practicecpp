
#include<bits/stdc++.h>
using namespace std;
bool is_array_sorted(int* a,int n){
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1])return false;
    }
    return true;
}
int main(){
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   if(is_array_sorted(arr,n))cout<<"sorted"<<endl;
   else cout<<"not sorted"<<endl;

}