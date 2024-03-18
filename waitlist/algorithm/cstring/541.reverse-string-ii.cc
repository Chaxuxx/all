#include <vector>
#include <unordered_set>
#include <algorithm>
// https://leetcode.cn/problems/reverse-string-ii/
// 当需要固定规律一段一段去处理字符串的时候，要想想在在for循环的表达式上做做文章。
// 我们首先想到的是resnum来记录剩下的字符数量与k进行比较，resnum=size-i*2k
// 做个转换就是i每次加2k 这其实无所谓 看上去逻辑简洁一点
using namespace std;
class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += (2 * k)) {
            // 1. 每隔 2k 个字符的前 k 个字符进行反转
            // 2. 剩余字符小于 2k 但大于或等于 k 个，则反转前 k 个字符
            if (i + k <= s.size()) {
                reverse(s.begin() + i, s.begin() + i + k );
            } else {
                // 3. 剩余字符少于 k 个，则将剩余字符全部反转。
                reverse(s.begin() + i, s.end());
            }
        }
        return s;
    }
};
