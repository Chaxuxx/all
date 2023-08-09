#include <vector>
#include <algorithm>
using namespace std;

// 单链表
struct ListNode {
    int val;  // 节点上存储的元素
    ListNode *next;  // 指向下一个节点的指针
    ListNode(int x) : val(x), next(NULL) {}  // 节点的构造函数
};

int main()
{
    ListNode * head = new ListNode(5);
    ListNode second(3); //一般使用指针操作链表的结点
    head ->next = &second;

}

//list与array进行比较 增删 查询 