#include <iostream>
using namespace std;

int main (){
    // "abc" = "abcd"; 字符串字面值是左值 但是不能位于赋值符号左边 不能混淆左值的定义和性质
    // 左值的定义是可以取地址的表达式
    cout<<&"abc"<<endl;

}