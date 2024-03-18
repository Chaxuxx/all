// https://leetcode.cn/problems/intersection-of-two-arrays/
#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;
// 可以用map 对集合内部去重覆盖 然后集合之间加和 val为2的就是交集
//
// set和数组做哈希比较 set占空间大 耗时长 数组则需要集合内的值处在一个范围好固定数组的大小
// unordered_set的读写效率最高，因为底层实现不是红黑树...
class Solution {//时间复杂度O(mn)空间复杂度O(n)
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result_set; // 存放结果，之所以用set是为了给结果集去重
        unordered_set<int> nums_set(nums1.begin(), nums1.end());// 这种初始化方式学习！
        for (int num : nums2) {
            // 发现nums2的元素 在nums_set里又出现过
            if (nums_set.find(num) != nums_set.end()) {
                result_set.insert(num);
            }
        }
        return vector<int>(result_set.begin(), result_set.end());
    }
};

class Solution2 {//集合值有范围用数组
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> result_set; // 存放结果，之所以用set是为了给结果集去重
        int hash[1005] = {0}; // 默认数值为0
        for (int num : nums1) { // nums1中出现的字母在hash数组中做记录
            hash[num] = 1;
        }
        for (int num : nums2) { // nums2中出现话，result记录
            if (hash[num] == 1) {
                result_set.insert(num);
            }
        }
        return vector<int>(result_set.begin(), result_set.end());
    }
};
