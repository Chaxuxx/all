#include <iostream>
using namespace std;
int add(int a = 1,int b = 2);
int add(int a ,int b)//声明带了默认参数了 定义就不能带了
{
    return a+b;
}
int main(){

    int a = 2,b = 1;
    cout<< add();
    cout<< add(a,b);

}