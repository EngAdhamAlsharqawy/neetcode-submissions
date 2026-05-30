class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int servedStudents{};
        int totalStudents = students.size();

        for (int studentIndex{}, sandwichIndex{}, consecutiveRefusals{};
             consecutiveRefusals < totalStudents &&
             sandwichIndex < sandwiches.size(); ++studentIndex) {
            if (students[studentIndex] == sandwiches[sandwichIndex])
                ++servedStudents, ++sandwichIndex, consecutiveRefusals = 0;
            else
                students.push_back(students[studentIndex]),
                    ++consecutiveRefusals;
        }
        return totalStudents - servedStudents;
    }
};