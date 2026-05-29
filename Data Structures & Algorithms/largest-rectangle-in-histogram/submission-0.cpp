class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int largestArea{};
        heights.push_back(0);
        stack<int> monoIdxStack;
        monoIdxStack.push(0);
        for (int i{ 1 }; i < heights.size(); ++i) {
            while (!monoIdxStack.empty() and
                   heights[i] < heights[monoIdxStack.top()]) {
                int height{ heights[monoIdxStack.top()] };
                monoIdxStack.pop();
                int width{ monoIdxStack.empty() ? i
                                                : i - monoIdxStack.top() - 1 };
                largestArea = max(largestArea, height * width);
            }
            monoIdxStack.push(i);
        }
        return largestArea;
    }
};