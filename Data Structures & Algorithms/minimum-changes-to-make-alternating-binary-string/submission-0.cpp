class Solution {
public:
    int minOperations(string s) {
        int counter1{};
        bool digit{};
        for (char d : s) {
            counter1 += (d - '0') != digit;
            digit = !digit;
        }
        int counter2{};
        digit = 1;
        for (char d : s) {
            counter2 += (d - '0') != digit;
            digit = !digit;
        }
        return min(counter1, counter2);
    }
};