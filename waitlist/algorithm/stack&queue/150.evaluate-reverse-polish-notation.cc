// 逆波兰表达式：是一种后缀表达式
// 逆波兰表达式主要有以下两个优点：
    // 去掉括号后表达式无歧义，上式即便写成 1 2 + 3 4 + * 也可以依据次序计算出正确结果。
    // 适合用栈操作运算：遇到数字则入栈；遇到运算符则取出栈顶两个数字进行计算，并将结果压入栈中。
#include <stack>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> nums; // long long
        for (string& token : tokens) {
            if (token == "+" || token == "-" || token == "*" || token == "/") {
                int num2 = nums.top();
                nums.pop();
                int num1 = nums.top();
                nums.pop();
                int res = 0;
                if (token == "+") res = num1 + num2;
                else if (token == "-") res = num1 - num2;
                else if (token == "*") res = num1 * num2;
                else res = num1 / num2;
                nums.push(res);
            } else
                nums.push(stoi(token)); //stoi string to int 以此类推 stoll stol stof stod等等
        }
        return nums.top();
    }
};