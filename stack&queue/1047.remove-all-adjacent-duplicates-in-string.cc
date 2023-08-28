#include <vector>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
// 如何写出简洁的代码 在有基本的思路之后就上手写代码 然后在写的时候注意所有可操作的变量对于逻辑进行可能的优化 等价变化
class Solution {
public:
    string removeDeplicates(string s){
        stack<char> st;
        for(char c : s)
        {
            if(!st.empty() && st.top() == c)
            {
                st.pop();
            }
            else{
                st.push(c);;
            }
        }
        string result = "";// stack转string
        while (!st.empty()){
            result += st.top();
            st.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};
class Solution {
public:
    string removeDuplicates(string S) {
        string result;
        for(char s : S) {
            if(result.empty() || result.back() != s) {
                result.push_back(s);
            }
            else {
                result.pop_back();
            }
        }
        return result; //返回值不计空间复杂度 空间复杂度O1
    }
};
