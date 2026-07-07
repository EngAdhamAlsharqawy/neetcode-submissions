class Solution {
public:
    void sortColors(vector<int>& nums) {
        for (int zero{}, one{}, two{}; two < nums.size(); ++two) {
            int temp{ nums[two] };
            nums[two] = 2;
            if (temp < 2)
                nums[one++] = 1;
            if (temp < 1)
                nums[zero++] = 0;
        }
    }
};