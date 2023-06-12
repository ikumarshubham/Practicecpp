class MinStack {
public:
     stack<long long int>s;
       long long int mini=INT_MAX;
    MinStack() {
       
       
    }
    
    void push(long long int val) {
        if(s.empty()){
            s.push(val);
            mini=val;
        }
        else{
            if(val<mini){
                long long int data=2*val-mini;
                s.push(data);
                mini=val;
            }
            else{
                s.push(val);
            }
        }
    }
    
    void pop() {
        if(s.empty())return;
        if(s.top()>mini){
             s.pop();
        }
        else{
           long long int prvious_min=mini;
            mini=2*mini-s.top();
            s.pop();
        }
    }
    
    int top() {
        if(s.top()>mini){
            return s.top();
        }
        return mini;
    }
    
    int getMin() {
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */