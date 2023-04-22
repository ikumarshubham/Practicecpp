#include<iostream>
#include<climits>
using namespace std;
bool ispossible(int a[],int n,int m,int max_pages){
    int student_used=1;
    int page=0;
    for(int i=0;i<n;i++){
        if(page+a[i]>max_pages){
            student_used++;
            page=a[i];
            if(student_used>m){
                return false;
            }
        }
        else{
            page+=a[i];
        }
    }
    return true;
}
int main(){
    int n=4;
    int m=2;
    int a[n]={10,20,30,40};
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
        
    }
    int s=a[n-1];
    int e=sum;
    int ans=INT_MAX;
    while(s<=e){
        int mid=(s+e)/2;
        if(ispossible(a,n,m,mid)){
            ans=min(ans,mid);
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    cout<<ans;
}