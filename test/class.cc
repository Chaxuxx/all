#include <iostream>
using namespace std;
class A{
    int a;
    int &c=a;
public:
    int b;
    virtual ~A(){cout<<"A distruct"<<endl;}//不写virtual的话就会 free(): invalid pointer
};
class B : virtual public A{
    int a = 1;
public:
    int b;
    B(int b1){b=b1;}
    ~B(){cout<<"B distruct"<<endl;}
};
class C : virtual public A{
    int a = 1;
public:
    int b;
    C(int b1){b=b1;}
    ~C(){cout<<"C distruct"<<endl;}
};
class D : public B,public C{
    int a = 1;
public:
    int b;
    D(int b1):B(1),C(2){b=b1;}//父类没有默认构造函数，要用初始化列表调用构造
    ~D(){cout<<"D distruct"<<endl;}
};

class out{
public:
    class in{
        public:
            static void display(){
                cout<<"this is a class in a class"<<endl;
            }
    };
    in a;
    void display(){
        a.display();
    }

};
// C中没有函数中的函数
// void function (){
//     void funin(){
//         cout<<"this is a function"<<endl;
//     }
//     funin();
// }
class fri{
public:
    friend class A;//友元关系不能被继承。你爸的朋友不是你的朋友


};
int main(){
    A *p = new B(2);
    // cout<<p->a;//类内默认是private
    cout<<p->b<<endl;//会使用基类的b 并没有覆盖 多态、覆盖、重载动态多态仅仅是类成员函数的说法。
    // cout<<p->B::b<<endl;
    delete p;
    out k;
    k.display();
    out::in::display();
    

    
}