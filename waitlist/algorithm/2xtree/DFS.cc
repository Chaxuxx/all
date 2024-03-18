// 包含二叉树node定义 深度优先遍历的前中后序遍历 递归方式和非递归(迭代)方式

#include <vector>
#include <stack>
#include <algorithm>
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
    //递归方式
    void preordertraversal(TreeNode* cur, std::vector<int>& vec) {
        if (cur == NULL) return;
        vec.push_back(cur->val);    // 中
        preordertraversal(cur->left, vec);  // 左
        preordertraversal(cur->right, vec); // 右
    }
    void inordertraversal(TreeNode* cur, std::vector<int>& vec) {
        if (cur == NULL) return;
        inordertraversal(cur->left, vec);  // 左
        vec.push_back(cur->val);    // 中
        inordertraversal(cur->right, vec); // 右
    }   
    void postordertraversal(TreeNode* cur, std::vector<int>& vec) {
        if (cur == NULL) return;
        postordertraversal(cur->left, vec);  // 左
        postordertraversal(cur->right, vec); // 右
        vec.push_back(cur->val);    // 中
    }


    // std::vector<int> preorderTraversal(TreeNode* root) {
    //     std::vector<int> result;
    //     preordertraversal(root, result);
    //     return result;
    // }

    //迭代法
    std::vector<int> preorderTraversal(TreeNode* root) {
        std::stack<TreeNode*> st;
        std::vector<int> result;
        if (root == NULL) return result;
        st.push(root);
        while (!st.empty()) {
            TreeNode* node = st.top();                       // 中
            st.pop();
            result.push_back(node->val);
            if (node->right) st.push(node->right);           // 右（空节点不入栈）
            if (node->left) st.push(node->left);             // 左（空节点不入栈）
        }
        return result;
    }
    std::vector<int> inorderTraversal(TreeNode* root) {
        std::vector<int> result;
        std::stack<TreeNode*> st;
        TreeNode* cur = root;
        while (cur != NULL || !st.empty()) {
            if (cur != NULL) { // 指针来访问节点，访问到最底层
                st.push(cur); // 将访问的节点放进栈
                cur = cur->left;                // 左
            } else {
                cur = st.top(); // 从栈里弹出的数据，就是要处理的数据（放进result数组里的数据）
                st.pop();
                result.push_back(cur->val);     // 中
                cur = cur->right;               // 右
            }
        }
        return result;
    }
    std::vector<int> postorderTraversal(TreeNode* root) {
        std::stack<TreeNode*> st;
        std::vector<int> result;
        if (root == NULL) return result;
        st.push(root);
        while (!st.empty()) {
            TreeNode* node = st.top();
            st.pop();
            result.push_back(node->val);
            if (node->left) st.push(node->left); // 相对于前序遍历，这更改一下入栈顺序 （空节点不入栈）
            if (node->right) st.push(node->right); // 空节点不入栈
        }
        reverse(result.begin(), result.end()); // 将结果反转之后就是左右中的顺序了
        return result;
    }


















    
} ;