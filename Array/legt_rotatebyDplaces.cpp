#include<bits/stdc++.h>
using namespace std;
//Number of rotations will always be equal to "D=D%N" because if we rotate an array N times then original array comse back 
    //Total Time complexicty O(D)+O(n-D)+O(D)=O(n+D)
    //space complexicity is O(D)
void left_rotatebyD(int *a,int n,int D){
     D=D%n;
     int temp[D];
     for(int i=0;i<D;i++){
      temp[i]=a[i];
     }
     for(int i=D;i<n;i++){
      a[i-D]=a[i];
     }
     for(int i=n-D;i<n;i++){
      a[i]=temp[i-(n-D)];
     }
}

void left_rotatebyD_optimal(int* a,int n,int D){
  D=D%n;
  reverse(a,a+D);
  reverse(a+D,a+n);
  reverse(a,a+n);
}

int main(){
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
// left_rotatebyD(arr,n,3);
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }

left_rotatebyD_optimal(arr,n,9);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

cout<<endl;

return 0;

}