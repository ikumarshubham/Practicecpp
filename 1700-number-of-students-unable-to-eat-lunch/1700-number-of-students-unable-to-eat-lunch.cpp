class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
       int arr[2]={0};
        int size=students.size();
        for(int i=0;i<size;i++){
            arr[students[i]]++;
        }
        int k=0;
        for(int i=0;i<size;i++){
            if(arr[sandwiches[i]]>0){
                arr[sandwiches[i]]--;
            }
            else{
                break;
            }
            k++;
        }
        
        return size-k;
    }
};