class MyStack {
    queue<int>q1,q2;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q1.push(x);
    }
    
    int pop() {
         while(q1.size()>1){
            int element=q1.front();
            q2.push(element);
            q1.pop();
        }
       int element=q1.front();
        q1.pop();
        swap(q1,q2);
        return element;
    }
    
    int top() {
        while(q1.size()>1){
            int element=q1.front();
            q2.push(element);
            q1.pop();
        }
        int element=q1.front();
        q2.push(element);
        q1.pop();
        swap(q1,q2);
        return element;
    }
    
    bool empty() {
        if((q1.size()+q2.size())==0){
            return true;
        }
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */