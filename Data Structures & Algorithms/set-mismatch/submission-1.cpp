class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> errorNums(2);
        for (int i{ 1 }; i <= nums.size(); ++i) {
            int counter{};
            for (int n : nums)
                counter += n == i;
            if (counter == 2)
                errorNums[0] = i;
            else if (!counter)
                errorNums[1] = i;
        }
        return errorNums;
    }
};