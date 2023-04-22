//https://leetcode.com/problems/peak-index-in-a-mountain-array/
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0,e=arr.size()-1;
     
        while(s<e){
            int mid=(s+e)/2;
            if(arr[mid]>arr[mid+1]) {
             
                e=mid;
                
                   //you are decreasing part of the array 
                //this may be your ans;
                //that is why e=mid
            }
            else{
                s=mid+1;
                
                //you are int the increasing part of the array
                // and we know mid+1 is larger number 
            }
        }
        
        
      return s; 
        
        //in the end s==e and pointing to the largest number becuase of the two checks above
        //start and end always finding max element in the above 2 checks
        //hence when they are pointing to just one element ,that is the max one 
        //because that is what the checks say
        //more elaboration : at every time of start and end they have the best possible ans till that time.
        //if we are saying only one item is remaning ,hence  because of above line that is the best possible ans.
        
    }
};