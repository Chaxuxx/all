#include <iostream>
#include <stdlib.h>
using namespace std;
int well(int&k)
{
    return k;
}
int main(){
    //用户标识符？
    int include = 1;
    int define = 2;
    int IF = 2;
    // int if = 3;
    int ifdef = 4;
    // int else = 5;
    int endif = 6;
    int pragma = 7;
    int error = 8;
    int warning = 9;
    int function = 10;
    // int malloc = 11;//如果定义了与函数名相同的变量，之后使用函数的时候可能会出现问题
    // int free = 12;
    // int new = 11;
    cout<<include<<endl;
    cout<<define<<endl;
    cout<<IF<<endl;
    // cout<<if<<endl;
    cout<<ifdef<<endl;
    // cout<<malloc<<endl;
    int x = 0x12;
    cout<<x<<endl;
    int a[3] = {0,1,2};
    int *p = &a[0];
    int *p1 = &a[2];
    // int *p2 = &a; int (*)[3]" 类型的值不能用于初始化 "int *" 类型的实体 指向int数组的指针 


    cout<<p1-p<<endl;

    int *pmalloc = (int*)malloc(100);
    cout<<sizeof(pmalloc)<<endl;
    cout<<sizeof(*pmalloc)<<endl;
    free(pmalloc);
    // break;break 语句只能在循环或开关中使用
    // for(;;){cout<<"hello";};//无限循环
    // while(); 必须要有表达式
    // while(include=1);//无限循环
    ; //空语句可行。
    do{}while(include==2); //这里不可以没有";"
    // int & a =100;非常量引用的初始值必须为左值


    // cout<<well(100)<<endl;非常量引用的初始值必须为左值
    const int sd = 100;
    const int ds = 200;
    // sd = ds;表达式必须是可修改的左值
}