#include<bits/stdc++.h>
using namespace std;
//"FIND INTERSECTION IN A SORTED ARRAY "
// intersection of two array {1,2,2,3,3,4,5,6} and {2,3,3,5,6,6,7}={2,3,3,6}

vector<int> intersection_brute(int* a,int* b, int n1,int n2){
    vector<int>v;//time =O(n1*n2) space=O(n2)
    int visited[n2]={0}; 
for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++){
        if(a[i]==b[j]&&visited[j]==0){
            v.push_back(a[i]);
            visited[j]=1;
            break;
        }
        if(b[j]>a[i])break;
    }
}

return v;
}
vector<int> intersection_optimal(int* a,int* b, int n1,int n2){
    vector<int>v;//time =O(n1*n2) space=O(n2)
   
int i=0,j=0;
while(i<n1 && j<n2){
  if(a[i]==b[j]){
    v.push_back(a[i]);
    i++;j++;
  }
  else if(a[i]<b[j])i++;
  else j++;
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
// vector<int>v=intersection_brute(arr,b,n,m);
vector<int>v=intersection_optimal(arr,b,n,m);
int k=v.size();
cout<<k<<endl;
for(int i=0;i<k;i++){
    cout<<v[i]<<" ";
}

cout<<endl;

return 0;

}