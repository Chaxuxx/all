// https://leetcode.cn/problems/happy-number/
#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;
class Solution {
public:
    int yeah(int n) {
        int res = 0;
        while (n) {
            res += (n % 10) * (n % 10);
            n /= 10;
        }
        return res;
    }
    bool isHappy(int n) {
        unordered_set<int> set;
        while (1) {
            int sum = yeah(n);
            if (sum == 1) return true;
            if (set.find(sum) != set.end()) return false;
            set.insert(sum);
            n = sum;
        }


    }
};
    // 时间复杂度: O(logn)
    // 空间复杂度: O(logn)