#include<iostream>
using namespace std;



int main(){
    
    // Simple Interest
    //Declare a variable
    int p,r,t;
    float si;
    
    //Assigns Values to the buckets (storage in the memory)
    p = 10;
    r = 25;
    t = 1;
    
    //250/100=2.50
    //every statement should be terminated by a semi-colon;
    
    si = p*r*t/100.0;
    
    //if we want that our Simple interest should also be in float then we will make 100.0 so integer/float=float
    //this concept of changing the data type is called typecasting
    //typecasting -> Implicit - the one that happens automatically, in this case the type is determined automatically according to the rules of C++
    //integer/integer = integer
    //float/integer = float
    //integer/float = float
    
    
    cout<< si <<endl;
    
    
   
    
    return 0;
}