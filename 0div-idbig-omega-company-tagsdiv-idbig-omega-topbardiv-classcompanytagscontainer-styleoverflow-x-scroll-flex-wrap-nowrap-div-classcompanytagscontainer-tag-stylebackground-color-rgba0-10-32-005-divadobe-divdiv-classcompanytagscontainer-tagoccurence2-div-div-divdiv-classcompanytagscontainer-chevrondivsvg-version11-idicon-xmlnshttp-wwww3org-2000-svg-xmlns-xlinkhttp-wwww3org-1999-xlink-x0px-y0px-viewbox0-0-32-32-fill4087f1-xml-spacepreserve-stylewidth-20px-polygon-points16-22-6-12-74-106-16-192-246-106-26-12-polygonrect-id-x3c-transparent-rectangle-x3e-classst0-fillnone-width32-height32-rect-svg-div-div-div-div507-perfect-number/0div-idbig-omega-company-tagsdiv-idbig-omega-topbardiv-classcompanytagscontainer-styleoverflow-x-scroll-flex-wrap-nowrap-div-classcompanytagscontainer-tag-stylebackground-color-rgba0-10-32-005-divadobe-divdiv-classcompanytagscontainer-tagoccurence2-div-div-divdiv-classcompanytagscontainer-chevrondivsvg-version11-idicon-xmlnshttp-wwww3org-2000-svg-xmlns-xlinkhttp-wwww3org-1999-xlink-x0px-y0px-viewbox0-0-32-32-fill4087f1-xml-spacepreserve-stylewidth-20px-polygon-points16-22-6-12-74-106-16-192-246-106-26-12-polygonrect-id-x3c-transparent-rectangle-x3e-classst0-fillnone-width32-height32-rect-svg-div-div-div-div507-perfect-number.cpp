class Solution {
public:
    bool checkPerfectNumber(int num) {
        long long int sum=0;
        cout<<num<<endl;
        for(int i=1;i<=num/2;i++){
            
            if(num%i==0){
               sum=sum+i;
                cout<<i<<endl;
            }
        }
        cout<<sum<<endl;
        cout<<num<<endl;
        if(sum==num){
            return true;
        }
        
        return false;
    }
};