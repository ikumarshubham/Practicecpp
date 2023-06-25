class MyCircularDeque {
public:
    int *arr;
    int f,r,cs,ms;
    MyCircularDeque(int k) {
        arr= new int[k];
        ms=k;
        cs=0;
        f=0;
        r=ms-1;
    }
    
    bool insertFront(int value) {
        if(!isFull()){
            f=(f-1)%ms;
            if(f<0){
                f=f+ms;
            }
            arr[f]=value;
            cs++;
            
            return true;
          
        }
        
        return false;
    }
    
    bool insertLast(int value) {
        if(!isFull()){
            r=(r+1)%ms;
            arr[r]=value;
              cs++;
            return true;
          
        }
        
        return false;
    }
    
    bool deleteFront() {
         if(!isEmpty()){
            f=(f+1)%ms;
            cs--;
            return true;
            
        }
        
        return false;
    }
    
    bool deleteLast() {
        if(!isEmpty()){
             r=(r-1)%ms;
            if(r<0){
                r=r+ms;
            }
            cs--;
            return true;  
        }
        
        return false;
    }
    
    int getFront() {
        if(!isEmpty()){
            return arr[f];
        }
        return -1;
    }
    
    int getRear() {
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
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */