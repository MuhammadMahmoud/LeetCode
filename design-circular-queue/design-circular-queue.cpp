class MyCircularQueue {
    int *arr;
    int size=0,capacity;
    int head=0,tail=0;
public:
    MyCircularQueue(int k) {
        capacity=k;
        arr=new int[capacity];
        size=0;
    }
    
    bool enQueue(int value) {
        if(size < capacity && size>0){
            if(tail + 1 == capacity){
                tail=0;
            }
            else{
                tail++;
            }
            arr[tail]=value;
            size++;
            return true;
        }
        else if(size < capacity && size==0){
            head=tail=0;
            arr[tail]=value;
            size++;
            return true;
        }
        else{
            // can't append
            return false;
        }
    }
    
    bool deQueue() {
        if(size <= capacity && size!=0){
            if( head + 1 == capacity){
                head=0;
            }
            else{
                head++;
            }
            size--;
            return true;
        }
        else if(size < capacity && size==0){
            return false;
        }
        else{
            // can't append
            return false;
        }
    }
    
    int Front() {
        if(size>0)
            return (unsigned int)arr[head];
        else
            return -1;
    }
    
    int Rear() {
        if(size>0)
            return arr[tail];
        else
            return -1;
    }
    
    bool isEmpty() {
        if(size == 0){
            return true;
        }
        else
        {
            return false;
        }
    }
    
    bool isFull() {
        if(size == capacity){
            return true;
        }
        else{
            return false;
        }
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