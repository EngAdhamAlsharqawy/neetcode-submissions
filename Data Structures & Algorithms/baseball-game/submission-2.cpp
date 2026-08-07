class Solution {
public:
    int calPoints(vector<string>& operations) {
        int score{};
        stack<int> operations_stack;
        for (string& o : operations) {
            if (o != "C") {
                if (o == "+") {
                    int n = operations_stack.top();
                    operations_stack.pop();
                    int sum = n + operations_stack.top();
                    operations_stack.push(n);
                    operations_stack.push(sum);
                } else if (o == "D") {
                    operations_stack.push(2 * operations_stack.top());
                } else {
                    operations_stack.push(stoi(o));
                }
                score += operations_stack.top();
            } else {
                score -= operations_stack.top();
                operations_stack.pop();
            }
        }
        return score;
    }
};