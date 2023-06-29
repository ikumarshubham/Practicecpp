class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int size=digits.size();
        
        reverse(digits.begin(),digits.end());
        digits[0]=digits[0]+1;
        int carry=digits[0]/10;
        digits[0]=digits[0]%10;
        for(int i=1;i<size;i++){
            digits[i]+=carry;
            carry=digits[i]/10;
            digits[i]=digits[i]%10;
        }
        
        if(carry>0){
            digits.push_back(carry);
        }
        
        reverse(digits.begin(),digits.end());
        
        return digits;
        
    }
};