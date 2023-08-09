/*
二分查找
使用条件：数组有序、数字没有重复 有重复元素 二分法搜索的下标就有可能不唯一

输入输出示例见：
https://leetcode.cn/problems/binary-search/

想用递归？你再想想。

对于像二分这种包含无限推导的算法，可以使用while代替递归。
递归也需要指定结束条件。

递归三要素包含：
初始化
结束条件
循环逻辑

其实和循环的要素是相同的。

时间复杂度：O(log n) 类似二分的算法都是logn 与递归的树状2的n次方对比理解
空间复杂度：O(1)

*/


#include <vector>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;//定义一个闭区间
    
        while (left <= right){//对于闭区间，==的时候，区间有效

            int middle = left + ((right - left) / 2);//对于middle的定义其实不用多想，就算是分成1/3和2/3也没事。主要是循环初始化和结束条件的问题。

            if (nums[middle] == target) return middle;

            else if (nums[middle] < target) left = middle + 1;

            else if (nums[middle] > target) right = middle - 1; //-1是为了排除middle，以为已经不可能是middle了，如果不减的话，其实问题不大。

        }
        
        return -1;//没有找到就返回-1 








    }
};

class Solution2 {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size();//定义一个开区间
    
        while (left < right){//对于开区间，==的时候，区间无效

            int middle = left + ((right - left) >> 1);//对于middle的定义其实不用多想，就算是分成1/3和2/3也没事。主要是循环初始化和结束条件的问题。

            if (nums[middle] == target) return middle;

            else if (nums[middle] < target) left = middle + 1;

            else if (nums[middle] > target) right = middle; //开区间就不能用这个小tips了

        }
        
        return -1;//没有找到就返回-1 








    }
};