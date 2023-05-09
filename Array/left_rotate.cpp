#include<bits/stdc++.h>
using namespace std;

void left_rotateby1(int *a,int n){

        int x=a[0];
       for(int i=0;i<n-1;i++){
        a[i]=a[i+1];
       }
     a[n-1]=x;
    
}

int main(){
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//swapping should be avoided
//  for(int i=1;i<=2;i++){
//         int x=arr[0];
//         for(int j=0;j<n-1;j++){
//             swap(arr[j],arr[j+1]);
//             cout<<arr[j]<<endl;
//         }
//     }

left_rotateby1(arr,n);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;

}