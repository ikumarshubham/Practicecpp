class MyCircularQueue {
    int* arr;
    int f,r,cs,ms;
public:
    MyCircularQueue(int k) {
        arr=new int[k];
        cs=0;
        ms=k;
        f=0;
        r=ms-1;
    }
    
    bool enQueue(int value) {
        if(!isFull()){
            r=(r+1)%ms;
            arr[r]=value;
              cs++;
            return true;
          
        }
        
        return false;
    }
    
    bool deQueue() {
        if(!isEmpty()){
            f=(f+1)%ms;
            cs--;
            return true;
            
        }
        
        return false;
    }
    
    int Front() {
        if(!isEmpty()){
            return arr[f];
        }
        return -1;
    }
    
    int Rear() {
        if(!isEmpty()){
            return arr[r];
        }
        return -1;
    }
    
    bool isEmpty() {
        return cs==0;
    }
    
    bool isFull() {
        return cs==ms;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */