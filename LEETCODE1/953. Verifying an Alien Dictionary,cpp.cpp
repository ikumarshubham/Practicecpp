class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<char,int>mp;
        for(int i=0;i<order.size();i++){
            mp[order[i]]=i;
        }
        for(int i=0;i<words.size()-1;i++){
            string w1=words[i];
            string w2=words[i+1];
            int n=min(w1.size(),w2.size());
            for(int j=0;j<n;j++){
                if(mp[w1[j]]<mp[w2[j]]) break;
                 if(mp[w1[j]]>mp[w2[j]]) return false;
                 if(j==n-1 &&w1.size()>w2.size() ) return false;
            }
            
        }
        return true;
    }
};


/*
here we use map.
we have to make pair of strings to compare them.
i<words.size()-1 thats why we used this for eg. if we  have only 2 strings i<1 for i=0 it will run so we have w[0] & w[1].
if(mp[w1[j]]<mp[w2[j]]) break; here we  are using breaks because we have to check for other words also
if(j==n-1 &&w1.size()>w2.size() ) return false;
here if we find that j==n-1 && w1.size()>w2.size() we return false because till now all the elements are same and if w1 is lager than w2 
because till now all the elements are same and if w1 is lager than w2 then it is not lexicographically sorted 
on the other hand if w1 was samller and j==n-1 means we reached end of w1 and w2>w1 in length and there fore ans is true;
*/