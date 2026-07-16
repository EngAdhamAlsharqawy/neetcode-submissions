class MinStack {
    long min{};
    std::stack<long> stack;
public:
    MinStack() {
        
    }
    
    void push(long value) {
        if (stack.empty())
            min = value;
        stack.push(value - min), min = std::min(value, min);
    }
    
    void pop() {
        if (stack.top() < 0)
            min = min - stack.top();
        stack.pop();
    }
    
    int top() {
        return stack.top() < 0 ? min : stack.top() + min;
    }
    
    int getMin() {
        return min;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */