#include <vector>
#include <iostream>
using namespace std;
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    // TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    // TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 返回节点权值1个数比0的个数多一的路径数
     * @param root TreeNode类 权值为0和1的二叉树根节点
     * @return int整型
     */
    void pathrecord(TreeNode* root,vector<int> path,vector<vector<int>>& record)
    {
        path.emplace_back(root->val);
        if(root->left == nullptr && root->right == nullptr)
        {
            record.emplace_back(path);
            return;
        }
        if(root->left!=nullptr)pathrecord(root->left,path,record);
        if(root->right!=nullptr)pathrecord(root->right,path,record);
        return;
        
    }
    int pathNumber(TreeNode* root) {
        // write code here
        vector<vector<int>> record;
        vector<int> path;
        int result = 0;
        pathrecord(root,path,record);
        for(vector<int> vv : record)
        {
            int num1 = 0,num0 = 0;
            for(int i : vv)
            {
                if(i == 1) num1++;
                if(i == 0) num0++;
                
            }
            if(num1 == num0+1) result++;
        }
        return result;
        
    }
};
int main(){
    Solution s;
    TreeNode*root = new TreeNode(1);
    TreeNode*n1 = new TreeNode(0);
    TreeNode*n2 = new TreeNode(0);
    TreeNode*n3 = new TreeNode(1);
    TreeNode*n4 = new TreeNode(0);
    // TreeNode*n5 = new TreeNode(1);
    TreeNode*n6 = new TreeNode(1);
    root->left = n1;
    root->right = n2;
    n1->left = n3;
    n1->right = n4;
    // n2->left = n5;
    n2->right = n6;
    int result = s.pathNumber(root);
    cout<<result;
    
}