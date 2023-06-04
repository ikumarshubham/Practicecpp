class Solution {
public:
    vector<vector<int>> differenceOfDistinctValues(vector<vector<int>>& grid) {
        int size=grid.size();
        int size1=grid[0].size();
        vector<vector<int>>ans(grid.begin(),grid.end());
        for(int i=0;i<size;i++){
            for(int j=0;j<size1;j++){
                int x=j+1;
                int y=i+1;
                set<int>st1;
                
                while(y<size && x<size1){
                    st1.insert(grid[y][x]);
                    x++;
                    y++;
                }
                
                 x=j-1;
                 y=i-1;
                set<int>st2;
                
                while(y>=0 && x>=0){
                    st2.insert(grid[y][x]);
                    x--;
                    y--;
                }
                
                
                ans[i][j]=abs((int)st1.size()-(int)st2.size());
                
            }
        }
        return ans;
    }
};