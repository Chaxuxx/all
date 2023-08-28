// https://leetcode.cn/problems/reverse-string/
#include <vector>
#include <unordered_set>
#include <iostream>
using namespace std;
class Solution {
public:
    void reverseString(vector<char>& s) {
        for (int i = 0, j = s.size() - 1; i < s.size()/2; i++, j--) {
            swap(s[i],s[j]);
        }

    }
};
//看一下C++库函数reverse的实现 swap是如何实现的呢