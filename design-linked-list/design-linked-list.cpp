class node{
public:
    int val;
    node* next;
    node(){
        val=0;
        next=NULL;
    }
    node(int data){
        this->val=data;
        next=NULL;
    }
};
class MyLinkedList {
public:
    int size;
    node* head;
    MyLinkedList() {
        this->size=0;
        this->head=NULL;
    }
    int get(int index) {
        // cout<<"Get index="<<index<<endl;
        node* temp=this->head;
        if(size > index && index >= 0){
            while( index > 0 ){
            // cout<<index<<endl;
            temp=temp->next;
            index--;
            }
        }
        else{
          return -1;   
        }
        // cout<<"returned val="<<temp->val<<endl;
        return temp->val;
    }
    
    void addAtHead(int val) {
        node* inserted=new node(val);
        inserted->next=this->head;
        head=inserted;
        // cout<<"Head insert="<<head->val<<endl;
        size++;
    }
    
    void addAtTail(int val) {
        node* temp=this->head;
        node* inserted=new node(val);
        if( this->size > 0){
            while(temp->next != NULL){
                temp=temp->next;
            }
            temp->next=inserted;
        }
        else{
            this->head=inserted;
        }
        // cout<<"tail insert="<<temp->val<<endl;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        node* inserted=new node(val);
        node* prev=this->head;
        if(size > index || (size==0 && index ==0)){
            if(index == 0){
                inserted->next=head;
                head=inserted;
                size++;
                return;
            }
            while(index>1){
                prev=prev->next;
                index--;
            }
            inserted->next=prev->next;
            prev->next=inserted;
            size++;
        }
        else if(size == index){
            while(index>1){
                prev=prev->next;
                index--;
            }
            // cout<<"Value of the current last node="<<prev->val<<endl;
            prev->next=inserted;
            // cout<<"Value of the current last node="<<prev->val<<endl;
            size++;
            return;
        }
        else{
            // no insert will happen
            delete inserted;
        }
    }
    
    void deleteAtIndex(int index) {
        // cout<<index<<endl;
        node* prev=this->head;
        node* curr;
        if(size>index){
            if(index == 0 && size-1 ==0){
                head=NULL;
                size--;
                return;
            }
            else if(index == 0 && size-1 > 0){
                curr=head;
                head=head->next;
                delete curr;
                size--;
                return;
            }
            else if( index == size-1){
                while(index>1){
                prev=prev->next;
                index--;
                }
                curr=prev->next;
                prev->next=NULL;
                delete curr;
                size--;
                return;
            }
            while(index>1){
                prev=prev->next;
                index--;
            }
            curr=prev->next;
            prev->next=curr->next;
            delete curr;
            size--;
        }
        else{
            //not valid
        }
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */