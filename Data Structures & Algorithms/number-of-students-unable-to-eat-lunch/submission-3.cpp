class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        queue<int> q;
        for (int s : students)
            q.push(s);
        for (int sandwich : sandwiches) {
            int refusals{};
            while (refusals < q.size() and q.front() != sandwich) {
                q.push(q.front());
                q.pop();
                ++refusals;
            }
            if (q.front() == sandwich)
                q.pop();
            else
                break;
        }
        return q.size();
    }
};