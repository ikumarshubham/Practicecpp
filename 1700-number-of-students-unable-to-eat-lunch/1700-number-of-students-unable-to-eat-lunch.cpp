class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        stack<int>st;
        queue<int>q;
        for(int i=0;i<students.size();i++){
            q.push(students[i]);
        }
        for(int i=sandwiches.size()-1;i>=0;i--){
            st.push(sandwiches[i]);
        }
        
        int size=st.size();
        
        for(int i=0;i<size;i++){
            int size1=q.size();
            for(int j=0;j<q.size();j++){
                if(q.front()==st.top()){
                    q.pop();
                    st.pop();
                }
                else{
                    int temp=q.front();
                    q.pop();
                    q.push(temp);
                }
            }
            
            if(q.size()==size1){
                break;
            }
        }
        
        return q.size();
    }
};