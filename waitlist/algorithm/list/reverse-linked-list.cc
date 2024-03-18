#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
//https://leetcode.cn/problems/reverse-linked-list/
//双指针 
//实际只需要在常规遍历思路的cur指针上添加一个pre指针指向前一个结点就行了
//也就是使用指针存储前一个节点，很常见的操作
    // 时间复杂度: O(n)
    // 空间复杂度: O(1)
struct ListNode {
    int val;  // 节点上存储的元素
    ListNode *next;  // 指向下一个节点的指针
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* temp; // 保存cur的下一个节点
        ListNode* cur = head;
        ListNode* pre = nullptr;//初始化为null
        while(cur) {
            temp = cur->next;  // 保存一下 cur的下一个节点，因为接下来要改变cur->next
            cur->next = pre; // 翻转操作
            // 更新pre 和 cur指针
            pre = cur;
            cur = temp;
        }
        return pre;
    }
};
