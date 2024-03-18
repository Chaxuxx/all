#include <iostream>
using namespace std;
// class A{
// public:
//     A(){cout<<1;}
//     // virtual ~A(){cout<<11;}
//     ~A(){cout<<11;}
//     void print(){
//         cout<<"helloworld";
//     }
// };
// class B :public A{
// public:
//     // B():A(){cout<<2;}
//     B(){cout<<2;}
//     ~B(){cout<<22;}
//     void print(){
//         cout<<"helloworldb";
//     }
// };
// int main(){
//     A *a = new B;
//     a->print();
//     delete a;
// }

// char *& shabi()
// {
//     char * p = "hllo";
//     return p;//返回引用通常是返回输入参数修改后的引用 临时变量会被删除，会有段错误
// }
char ** shabi()
{
    char * p = "hllo";
    return &p;
}
int main(){
    char *p = shabi();
    while(*p)
    {
        printf("%c",*p++);
    }
}