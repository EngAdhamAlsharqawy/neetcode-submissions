class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for (int s : students)
            q.push(s);
        int sandwichIndex{}, consecutiveRefusals{};
        while (consecutiveRefusals < q.size() && sandwichIndex < sandwiches.size()) {
            int student{ q.front() };
            q.pop();
            if (student == sandwiches[sandwichIndex])
                ++sandwichIndex, consecutiveRefusals = 0;
            else
                q.push(student), ++consecutiveRefusals;
        }
        return q.size();
    }
};