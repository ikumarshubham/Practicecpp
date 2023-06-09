class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int size=letters.size();
        int s=0,e=size-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(letters[mid]==target)s=mid+1;
            else if(letters[mid]>target)e=mid-1;
            else  s=mid+1; 
        }

        return letters[s%size];
    }
};