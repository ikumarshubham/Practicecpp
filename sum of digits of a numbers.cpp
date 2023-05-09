#include <iostream>
using namespace std;
int main(){
    
    //sum of digits of number
    
    int n;
    cin>>n;
    int sum = 0;  //initialisation of a variable . so we are creating a variable sum whiuch has a initial vale of 0
    while(n>0){
        
        
        // last digit is found with the modulos operator which gives the remainder a%b= remainder when a/b.
        
        
        int last_digit = n%10;
        sum = sum + last_digit;
        n = n/10;
        
    }

    cout<<"sum of digits is "<<sum<<endl;
    
    /*so we combine a string with the value of variable
    Remember when we use cout statement any thing written in double quotes ""is printed as it is printed as it is ,
    and anything which is not written in a double quotes must be a variable.
    */
    
    return 0;
    
}