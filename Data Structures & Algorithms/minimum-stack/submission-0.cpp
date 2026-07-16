class MinStack {
    struct MinEntry {
        int value;
        int count;
    };

    stack<int> data;
    stack<MinEntry> mn_stack;

public:
    MinStack() = default;

    void push(int value) {
        data.push(value);
        if (mn_stack.empty() || value < mn_stack.top().value)
            mn_stack.push({ value, 1 });
        else
            ++mn_stack.top().count;
    }

    void pop() {
        data.pop();
        if (!--mn_stack.top().count)
            mn_stack.pop();
    }

    int top() const {
        return data.top();
    }

    int getMin() const {
        return mn_stack.top().value;
    }
};