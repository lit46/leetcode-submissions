class Node{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val=val;
    }
};

class MyCircularQueue {
    Node* front=nullptr;
    Node* rear=nullptr;
public:
    MyCircularQueue(int k) {
        while(k){
            Node* curr = new Node(-1);
            if(!front) front=curr;
            if(rear) rear->next=curr;
            rear=curr;
            k--;
        }
        rear->next=front;
        rear=front;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        if(rear->val!=-1) rear=rear->next;
        rear->val=value;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        front->val=-1;
        if(front!=rear) front=front->next;
        return true;
    }
    
    int Front() {
        return front->val;
    }
    
    int Rear() {
        return rear->val;
    }
    
    bool isEmpty() {
        if(front->val==-1) return true;
        return false;
    }
    
    bool isFull() {
        if(!isEmpty()&&rear->next==front) return true;
        return false;
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