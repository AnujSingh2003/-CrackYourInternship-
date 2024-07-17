class MyQueue {
public:
stack<int>input,output;
    MyQueue() {
        
    }
    void transfer(){
        if(output.empty()){
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
        }
    }
    
    void push(int x) {
        input.push(x);
    }
    
    int pop() {
        transfer();
        int rel=output.top();
        output.pop();
        return rel;
    }
    
    int peek() {
        transfer();
        int topp=output.top();
        return topp;
    }
    
    bool empty() {
        return input.empty()&&output.empty();
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