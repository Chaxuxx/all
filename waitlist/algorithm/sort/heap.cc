#include<vector>
#include <iostream>
using namespace std;

void heapify(vector<int>& nums, int n, int i)//对有一定顺序的堆，
//当前第i个结点取根左右的最大值（这个操作称heapfiy）
{
	int l = i * 2 + 1, r = i * 2 + 2; //数组存储完全二叉树性质 
	int max = i;
	if (l<n && nums[l]>nums[max])
		max = l;
	if (r<n && nums[r]>nums[max])
		max = r;
	if (max != i)
	{
		swap(nums[max], nums[i]);
		heapify(nums, n, max); //由于根节点换了值，将更换的叶子节点重新进行一次操作 从跟向页递归
	}
}
void heapify_build(vector<int>& nums, int n)//建立大根堆，从树的倒数第二层第一个结点开始，
//对每个结点进行heapify操作，然后向上走
{
	int temp = (n - 2) / 2;
	for (int i = temp; i >= 0; i--) //从最后一个节点的父节点开始往根走
		heapify(nums, n, i);

	for (int i = 0; i < nums.size(); i++)
		cout << nums[i] << " ";
	cout << endl;
}
void heapify_sort(vector<int>& nums, int n)//建立大根堆之后，每次交换最后一个结点和根节点（最大值），
//对交换后的根节点继续进行heapify（此时堆的最后一位是最大值，因此不用管他，n变为n-1）
{
	heapify_build(nums, n);
	for (int i = 0; i < n; i++)
	{
		swap(nums.front(), nums[n - i - 1]);
		heapify(nums, n - i - 1, 0);
	}
}
//一个for里面heap操作 heap操作本身是递归logn 时间复杂度是nlogn 不稳定（打乱整个nums）

// 最大堆的插入从叶子进行 删除只能删除根节点 logn 
//建堆的时间复杂度比较难算On https://blog.csdn.net/qq_52433890/article/details/121502538