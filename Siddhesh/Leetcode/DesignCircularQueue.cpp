class MyCircularQueue {
  public:
    vector<int> v;
    int h,t,im,size;    
    /** Initialize your data structure here. Set the size of the queue to be k. */
    MyCircularQueue(int k) {
      v.resize(k,INT_MIN);
      h=0,t=0,im=k,size=k;
    }
    
    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value) {
      if(isFull()) return false;
      if(t==0 && v[t]==INT_MIN){
        v[t]=value;
        --im;
      }
      else{
        if(t==size-1){
          t=0;
          v[t]=value;
          --im;
        }
        else{
          v[++t]=value;
          --im;
        }
      }
      return true;
    }
    
    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue() {
      if(isEmpty()) return false;
      if(h==size-1){
        v[h]=INT_MIN;
        ++im;
        h=0;
      }
      else{
        v[h]=INT_MIN;
        ++h;
        ++im;
        if(v[h]==INT_MIN) {
          h=0;
          t=0;
        }
      }
      return true;
    }
    
    /** Get the front item from the queue. */
    int Front() {
      if(isEmpty()) return -1;
      return v[h];
    }
    
    /** Get the last item from the queue. */
    int Rear() {
      if(isEmpty()) return -1;
      return v[t];
    }
    
    /** Checks whether the circular queue is empty or not. */
    bool isEmpty() {
      if(im==size) return true;
      return false;
    }
    
    /** Checks whether the circular queue is full or not. */
    bool isFull() {
      if(im==0) return true;
      return false;
    }
};
