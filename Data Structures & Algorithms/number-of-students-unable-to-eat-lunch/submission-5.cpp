class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        vector<int> sandwichPreferenceCount(2);
        for (int student : students)
            ++sandwichPreferenceCount[student];
        for (int sandwich : sandwiches)
            if (sandwichPreferenceCount[sandwich])
                --sandwichPreferenceCount[sandwich];
            else
                break;
        return sandwichPreferenceCount[0] + sandwichPreferenceCount[1];
    }
};