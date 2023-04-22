clss solution{
    private:
    bool issafe(int x,int y,int n,vector<vector<int>>visited,vector<vector<int>>&m){
        if((x>=0&&x<n)&&(y>=0 &&y<n)&&visited[x][y]==0 &&m[x][y]==1){
            return true;
        }
        else {
            return false;
        }
    }
    void solve(vector<vector<int>>&m,int n,vector<string>&ans,int x,int y,vector<vector<int>>visited,striing path){
        //base case
        if(x==n-1 &&y==n-1){
            ans.push_back(path);
            return ;
        }
        visited[x][y]=1;
        //4 choices - D L R U//down
        int newx=x+1;
        int newy=y;
        if(issafe(newx,newy,n,visited,m)){
            path.pushback('D');
            solve(m,n,newx,newy,visited,path);
            path.popback();
        }
        //left
         newx=x;
         newy=y-1;
        if(issafe(newx,newy,n,visited,m)){
            path.pushback('L');
            solve(m,n,newx,newy,visited,path);
            path.popback();
        }
        //Right
         newx=x;
         newy=y+1;
        if(issafe(newx,newy,n,visited,m)){
            path.pushback('R');
            solve(m,n,newx,newy,visited,path);
            path.popback();
        }
        //Up
        
        newx=x-1;
        newy=y;
        if(issafe(newx,newy,n,visited,m)){
            path.pushback('U');
            solve(m,n,newx,newy,visited,path);
            path.popback();
        }
        
        
        visited[x][y]=0;
        
    }
    public:
    vector<string> findpath(vector<vector<int>>&m,int n){
         vector<string>ans;
         if(m[0][0]==0)return ans;
        int srcx=0;
        int srcy=0;
        vector<vector<int>>visited=m;
        //initialised with 0
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                visited[i][j]=0;
            }
        }
        string path="";
        solve(m,n,ans,srcx,srcy,visited,path);
        solve(ans.begin(),ans.end());
        return ans;
        
    }
};