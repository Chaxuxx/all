#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
// https://leetcode.cn/problems/linked-list-cycle-ii/

//环形链表 快慢指针 一个走一步 一个走两步 只要相遇就说明有环
//那么问题就在于如何找环的入口了
//slow:x+y fast:x+y+n(y+z) 列方程 求x
//最后得出的结论是：x总比z多n周  x是表头到入口的距离 z是相遇点到入口的距离
//从链表开头和相遇点开头分别开走，z会比x多走n周，但是他们相遇一定是在入口，因为x-z的长度是环长的倍数。
//z走完了就到入口了，然后就开始绕n周。

struct ListNode {
    int val;  // 节点上存储的元素
    ListNode *next;  // 指向下一个节点的指针
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
            // 快慢指针相遇，此时从head 和 相遇点，同时查找直至相遇
            if (slow == fast) {
                ListNode* index1 = fast;
                ListNode* index2 = head;
                while (index1 != index2) {
                    index1 = index1->next;
                    index2 = index2->next;
                }
                return index2; // 返回环的入口
            }
        }
        return NULL;
    }
};