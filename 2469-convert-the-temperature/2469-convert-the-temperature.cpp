class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double> vec1(2,0);
        
        vec1[0]=celsius+ 273.15;
        vec1[1]=celsius * 1.80 + 32.00;
        return vec1;
        
    }
};