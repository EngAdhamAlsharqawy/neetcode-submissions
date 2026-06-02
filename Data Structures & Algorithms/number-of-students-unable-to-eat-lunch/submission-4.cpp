class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int idx{}, remain = students.size();
        for (int sandwich : sandwiches) {
            int refusals{};
            while (refusals < remain and students[idx] != sandwich) {
                idx = (idx + 1) % students.size();
                refusals += students[idx] != -1;
            }
            if (students[idx] == sandwich)
                students[idx] = -1, --remain;
            else
                break;
        }
        return remain;
    }
};