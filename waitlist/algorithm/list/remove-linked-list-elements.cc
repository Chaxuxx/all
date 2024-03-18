#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;
//https://leetcode.cn/problems/remove-linked-list-elements/
//注意new出来的节点需要delete
struct ListNode {
    int val;  // 节点上存储的元素
    ListNode *next;  // 指向下一个节点的指针
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * node = head;
        //头节点为要求值的情况要分开来处理
        if(head == nullptr)return head;//针对特殊情况head为null
        while(head!=nullptr && head->val == val)//针对全是val的特殊情况 这提醒我们在操作node的成员之前一定要确认node非空
        {
            node = head->next;
            head = head->next;
        }//这样就确保node.val!=val了
        while(node!=nullptr && node->next!=nullptr)//用while(node->next)这样的迭代方式的话，在最后会出现nullptr->next的情况 然后leetcode会报错：runtime error: member access within null pointer of type 'ListNode'
        {   

            while(node->next->val == val) //这样的判断方式是判别不了当前的节点是否是val的，判断的是下一个节点的val,所以要用while
            {
                node->next = node->next->next;
            }
            node = node->next;

            // if(node->next->val == val) //另一种写法
            // {
            //     node->next = node->next->next;
            // }
            // else{
            //     node = node->next;
            // }

        }

        return head;



        // ListNode* dummyHead = new ListNode(0); // 设置一个虚拟头结点
        // dummyHead->next = head; // 将虚拟头结点指向head，这样方面后面做删除操作，相当于对一个有头节点的链表进行操作了
        // ListNode* cur = dummyHead;//指向空node头 这样就不需要对头节点进行判断了，所有val判断都是对node->next->val进行的判断，和上述迭代逻辑没有本质区别，只不过用空节点头巧妙地归一化了对于head的特殊处理
        //为什么这里不直接用dummyHead呢？ dummyhead保存了一个可靠的（不会被迭代修改的）数组头节点 方便最后取得整个list
        //如果直接用dummyhead进行迭代的话，在迭代中会丢失前几个节点的操作权，进而无法获取list头，head是不可靠的，因为无法知道其有没有被删除。
        // while (cur->next != NULL) {
        //     if(cur->next->val == val) {
        //         ListNode* tmp = cur->next;
        //         cur->next = cur->next->next;
        //         delete tmp;
        //     } else { //这个else很关键
        //         cur = cur->next;
        //     }
        // }
        // head = dummyHead->next;
        // delete dummyHead;
        // return head;
    }
};

int main(){
    ListNode a(1),b(2),c(2),d(1);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    
    Solution kk;
    ListNode* k = &a;
    ListNode* answer = kk.removeElements(k,2);
    while(answer)
    {
        cout<<answer->val<<" ";
        answer = answer->next;
    }

}
//测试用例 1221,2   1234,2  2222,2  nullptr,1  2221,2