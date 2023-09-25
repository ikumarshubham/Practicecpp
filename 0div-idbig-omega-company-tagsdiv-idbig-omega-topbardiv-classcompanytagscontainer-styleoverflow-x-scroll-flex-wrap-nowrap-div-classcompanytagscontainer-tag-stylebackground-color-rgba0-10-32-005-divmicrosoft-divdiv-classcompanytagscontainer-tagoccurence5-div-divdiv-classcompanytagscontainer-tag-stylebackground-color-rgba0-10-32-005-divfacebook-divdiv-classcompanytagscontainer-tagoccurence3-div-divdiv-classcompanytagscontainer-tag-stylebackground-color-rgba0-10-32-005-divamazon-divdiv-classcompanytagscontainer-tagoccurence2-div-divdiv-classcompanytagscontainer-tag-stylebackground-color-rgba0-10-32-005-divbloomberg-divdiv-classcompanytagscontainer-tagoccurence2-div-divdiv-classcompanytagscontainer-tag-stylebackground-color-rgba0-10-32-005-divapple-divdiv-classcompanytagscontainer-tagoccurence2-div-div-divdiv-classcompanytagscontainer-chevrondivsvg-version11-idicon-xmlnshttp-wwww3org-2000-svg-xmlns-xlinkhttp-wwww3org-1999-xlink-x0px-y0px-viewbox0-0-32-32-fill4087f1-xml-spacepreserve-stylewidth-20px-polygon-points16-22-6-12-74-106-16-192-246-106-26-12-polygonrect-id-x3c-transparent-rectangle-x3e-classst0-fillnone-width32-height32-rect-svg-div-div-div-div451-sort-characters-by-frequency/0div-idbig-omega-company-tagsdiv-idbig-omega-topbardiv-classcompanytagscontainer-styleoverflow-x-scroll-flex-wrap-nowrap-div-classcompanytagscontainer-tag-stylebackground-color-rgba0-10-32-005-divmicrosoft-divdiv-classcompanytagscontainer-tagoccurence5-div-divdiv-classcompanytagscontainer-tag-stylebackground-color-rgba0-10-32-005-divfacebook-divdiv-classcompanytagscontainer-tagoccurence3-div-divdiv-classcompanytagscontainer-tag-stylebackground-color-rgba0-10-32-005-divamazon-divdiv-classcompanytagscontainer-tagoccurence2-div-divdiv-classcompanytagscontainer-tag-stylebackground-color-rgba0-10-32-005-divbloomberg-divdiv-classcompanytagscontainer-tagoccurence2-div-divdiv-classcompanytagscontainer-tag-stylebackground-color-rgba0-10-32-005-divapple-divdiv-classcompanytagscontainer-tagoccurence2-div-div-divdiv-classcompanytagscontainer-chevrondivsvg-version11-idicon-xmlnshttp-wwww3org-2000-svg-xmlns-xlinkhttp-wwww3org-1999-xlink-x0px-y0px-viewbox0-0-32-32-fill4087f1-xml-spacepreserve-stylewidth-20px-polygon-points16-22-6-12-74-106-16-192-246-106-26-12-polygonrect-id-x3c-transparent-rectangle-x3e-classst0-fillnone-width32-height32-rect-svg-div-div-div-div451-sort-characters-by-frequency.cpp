bool compare(pair<char,int>a,pair<char,int>b){
        return a.second>b.second;
    }

class Solution {
    
public:
    
    string frequencySort(string s) {
        vector<pair<char,int>>vec1;
        int n=s.size();
        if(n==1){
            return s;
        }
        map<char,int>mpp;
        for(char x:s){
            mpp[x]++;
        }
        
        
        for(auto &it:mpp){
            vec1.push_back(it);
        }
        
        sort(vec1.begin(),vec1.end(),compare);
        string ans="";
        
        int size=vec1.size();
        for(int i=0;i<size;i++){
            while(vec1[i].second>=1){
                ans+=vec1[i].first;
                vec1[i].second--;
            }
        }
                     
        return ans;
    }
};