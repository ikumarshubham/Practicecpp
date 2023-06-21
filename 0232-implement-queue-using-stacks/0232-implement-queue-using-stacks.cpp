class MyQueue {
    stack<int>s1,s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        
      while(s1.size()>1){
          int element=s1.top();
          s2.push(element);
          s1.pop();
      }
        int element=s1.top();
        s1.pop();
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        
        return element;
        
    }
    
    int peek() {
          while(s1.size()>1){
          int element=s1.top();
          s2.push(element);
          s1.pop();
      }
        int element=s1.top();
        s1.pop();
        s2.push(element);
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
        
        return element;
    }
    
    bool empty() {
        if((s1.size()+s2.size())==0){
            return true;
        }
        
        return false;
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */