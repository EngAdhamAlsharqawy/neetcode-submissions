#include <vector>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        flowerbed.insert(flowerbed.begin(), 0);
        flowerbed.push_back(0);
        for (int i{ 1 }; n and i < flowerbed.size() - 1; ++i)
            if (!flowerbed[i] and !flowerbed[i - 1] and !flowerbed[i + 1])
                ++flowerbed[i], --n;
        return !n;
    }
};