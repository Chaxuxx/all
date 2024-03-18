#include <vector>
#include <stack>
#include <queue>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    // TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    // TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution{
private:
    int getNodesNum(TreeNode* cur){
        if(cur == NULL) return 0;
        int leftNum = getNodesNum(cur->left);
        int rightNum = getNodesNum(cur->right);
        int treeNum = leftNum + rightNum + 1;
        return treeNum;
    }
public:
    int countNodes(TreeNode* root) {
        return getNodesNum(root);
    }
};
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == NULL) return 0;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};
// 时间复杂度on 空间复杂度ologn
// 在完全二叉树中，如果递归向左遍历的深度等于递归向右遍历的深度，那说明就是满二叉树
class Solution {
public:
    int countNodes(TreeNode* root) {
        if (root == NULL) return 0;
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        int leftDepth = 0, rightDepth = 0;
        while (left) {
            left= left->left;
            leftDepth++;    
        }
        while (right) {
            right= right->right;
            rightDepth++;    
        }
        if(leftDepth == rightDepth)
            return (2<<leftDepth)-1;
        // 2^leftDepth-1 使用满二叉树性质 对于完全二叉树就用普通的节点计算方式
        return countNodes(root->left) + countNodes(root->right) + 1;
    }
};
// 时间复杂度 O(log n × log n)
// 空间复杂度 O(log n)


            
