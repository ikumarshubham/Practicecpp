class Solution {
public:
    int tribonacci(int n) {
        int a=0;
        int b=1;
        int c=1;
        int d;
        if(n==0 || n==1){
            return n;
        }
        if(n==2){
            return 1;
        }
        
        for(int i=3;i<=n;i++){
            d=a+b+c;
            a=b;
            b=c;
            c=d;
        }
        return d;
        
    }
        
};