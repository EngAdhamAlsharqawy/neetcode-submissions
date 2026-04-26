class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> tried;
        while (true) {
            int candidate{ nums[rand() % n] };
            if (tried.count(candidate)) continue;
            tried.insert(candidate);
            int count{};
            for (int num : nums)
                count += num == candidate;
            if (count > n / 2)
                return candidate;
        }
        return 0;
    }
};