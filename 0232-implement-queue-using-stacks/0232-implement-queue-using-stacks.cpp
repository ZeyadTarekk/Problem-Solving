class MyQueue {
public:
    stack <int> first;
    stack <int> second;
    MyQueue() {
        
    }
    
    void push(int x) {
        first.push(x);
    }
    
    int pop() {
        int p;
        while(!first.empty()){
            p = first.top();
            first.pop();
            second.push(p);
        }
        second.pop();
        int s;
        while(!second.empty()){
            s = second.top();
            second.pop();
            first.push(s);
        }
        return p;
    }
    
    int peek() {
        int p;
        while(!first.empty()){
            p = first.top();
            first.pop();
            second.push(p);
        }
        int s;
        while(!second.empty()){
            s = second.top();
            second.pop();
            first.push(s);
        }
        return p;

    }
    
    bool empty() {
        return first.empty();
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