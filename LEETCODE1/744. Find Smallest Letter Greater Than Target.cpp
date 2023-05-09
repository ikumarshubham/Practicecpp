
//744. Find Smallest Letter Greater Than Target
//https://leetcode.com/problems/find-smallest-letter-greater-than-target/


class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
       int s=0,n=letters.size();
int e=n-1;
while(s<=e){
    int mid=(s+e)/2;
    if(letters[mid]>target)e=mid-1;
   
    else s=mid+1;
}

return letters[s%n];
    }
};




//wrap around==There are no characters in letters that is lexicographically greater than 'z' so we return letters[0].
//a=['c','d','f','j'] target ='j' so return a[0];
//we can do this via modulo %  return s%n for all it will return s for eg n=4 ans s=2 then 
//2%4 ==2
//but if s ==n means nothing larger than j so in that case s==n  so return s%n==0
//therefore we returned a[0];


