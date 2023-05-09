#include<bits/stdc++.h>
using namespace std;
//"FIND UNINON AND INTERSECTION IN A SORTED ARRAY "

// Uninon means add up without coping the duplicates
//uninon of{1,1,2,3,4,5} {2,3,4,4,5,6} is {1,2,3,4,5,6}

set<int> union_of_two_array(int*a,int* b,int n1,int n2){
set<int>s;
for(int i=0;i<n1;i++){
    s.insert(a[i]);//O(n1log(n))  here n size of set which cannot be said precisely
}
for(int i=0;i<n2;i++ ){
    s.insert(b[i]);//O(n2log(n))
}
return s;//space complexity(n1+n2 )
}
vector<int> union_array(int*a,int* b,int n1,int n2){
    //since we are visiting each and every element once so time complexity is O(n1+n2)
    
vector<int>v;
int i=0,j=0;
while(i<n1 && j<n2){
    
    if(a[i]<=b[j]){
         if(v.size()==0 || v.back()!=a[i] ){
            v.push_back(a[i]);
         }
         i++;
    }
    else{
        if(v.size()==0 || v.back()!=b[j] ){
            v.push_back(b[j]); 
         }
           j++;
    } 
}
while(i<n1){
    if(v.size()==0 || v.back()!=a[i] ){
            v.push_back(a[i]);
         }
            i++;
}
while(j<n2){
     if(v.size()==0 || v.back()!=b[j] ){
            v.push_back(b[j]);
         }
           j++;
}
 return v;
}

int main(){
    int arr[10];
    int b[10];
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>m;
    for(int i=0;i<m;i++)cin>>b[i];
// set<int>s=union_of_two_array(arr,b,n,m);
// for(auto it:s){
//     cout<<it<<" ";
// }

vector<int>v=union_array(arr,b,n,m);
int k=v.size();
cout<<k<<endl;
for(int i=0;i<k;i++){
    cout<<v[i]<<" ";
}

cout<<endl;

return 0;

}