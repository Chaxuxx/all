#include<iostream>
#include<vector>
using namespace std;
enum name{
    A = 1,
    B = 2,
    C = 4,
    D

};
class OB{
public:
    int ob = 0;
    void f1()
    {
        cout<<ob<<endl;
    }
    OB & operator++(){
        this->ob++;
        return *this;
    }
    OB operator++(int){
        // OB *temp = this;
        // ++(*this);
        // return *temp;//为什么不能是*呢 傻 地址不就一样了吗
        OB temp = *this;//所以要copy 
        ++(*this);
        return temp; //这里应该会有NRVO返回值优化
    }
};

template <typename T> inline T max1(T a ,T b){return a>b?a:b;}
int main(){
    // char a[10]={'1','2','3','4',0};
    // char *p = a +1;
    // printf("%s\n",p-1);
    OB ob1;
    enum name n = B;
    // int a = 1;
    int *arr=new int[5]();
    // OB *aob = new OB[];//类型不完整
    (++ob1).f1();
    // ++ob1.f1(); .优先级在++之上
    // operator++(ob1).f1(); 类内部函数不能这么用
    ob1.operator++().f1();
    // ob1.operator++().f1(); 后置的无法显示调用
    (ob1++).f1();
    ob1++.f1();

    
    max1<double>(2.5,3);
    // max1<double,double>(2.5,3);
    // max1(2.5,3);
    max1(2.5,double(3));

    // int *arr1 = new int[]; //不完整类型
    // int *arr1 = new int[]();//不完整类型

    // enum name n2 = (enum name) a;
    // int&  p = 2;//非常量引用的初始值必须为左值
    const int & p2 =2;
    const int a = 2;
    // int&p = a;//const丢失
    // cout<<*arr;
    float c = 1.3f;
}
