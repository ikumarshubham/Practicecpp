#include<bits/stdc++.h>
using namespace std;

// brute force approach
// time complexity would we O(n)+O(x)+O(n-x)=O(2n);

// void move_zeros(int* a,int n){
//      vector<int>v;
//    for(int i=0;i<n;i++){
//     if(a[i]!=0){
//         v.push_back(a[i]);
//     }
//    }
  
//   for(int i=0;i<v.size();i++){
//     a[i]=v[i];
//   }
//   for(int i=v.size();i<n;i++){
//     a[i]=0;
//   }
// }

//optimal
void move_zeros_optimal(int* a,int n){
    int i=0,j=i+1;
    for(;j<n;j++){
        if(a[i]!=0){
            i++;
        }
        if(a[i]==0 & a[j]!=0){
            swap(a[i],a[j]); 
            i++;
        }
    }
}

void move(int* a,int n){
    //time complexicity =O(x)+O(n-x)=O(n);
    int j=-1;
    for(int i=0;i<n;i++){
        if(a[i]==0){j=i;break;}
    }
    if(j==-1)return;
    
    for(int i=j+1;i<n;i++){
        if(a[i]!=0){
            swap(a[i],a[j]);
            j++;
        }
    }
}
int main(){
    int arr[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//move_zeros(arr,n);
//move_zeros_optimal(arr,n);
move(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;

return 0;

}