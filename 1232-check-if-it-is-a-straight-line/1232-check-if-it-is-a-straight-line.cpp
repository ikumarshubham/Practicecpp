class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int size=coordinates.size();
        if(size==2)return true;
       
        for(int i=2;i<size;i++){
            int a=(coordinates[i][1]-coordinates[i-1][1])*(coordinates[1][0]-coordinates[0][0]);
            int b=(coordinates[1][1]-coordinates[0][1])*(coordinates[i][0]-coordinates[i-1][0]);
            if(a!=b)return false;
        }
        return true;
    }
};