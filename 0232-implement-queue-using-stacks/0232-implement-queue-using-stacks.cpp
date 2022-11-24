class MyQueue {
public:
    stack<int> a;
    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int> b;
        if(a.empty())
        {
            a.push(x);
        }
        else{
            while(!a.empty()){
                b.push(a.top());
                a.pop();
            }
            a.push(x);
            while(!b.empty()){
                a.push(b.top());
                b.pop();
            }
        }
    }
    
    int pop() {
        int y=a.top();
        a.pop();
        return y;
    }
    
    int peek() {
        return a.top();
    }
    
    bool empty() {
        if(a.empty())
            return true;
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