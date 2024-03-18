#include <iostream>
using namespace std;
// namespace std {

// void run(){
//     int a = 1;
//     cout<<sizeof(a);
// }

void fun(char a[])
{
    cout<<sizeof(a);//8
}


// }

int main(){
    // std::run();//main不能写在namespace里
    // return 0; return 0会自动添加
    // char a[] = "hello"; //6
    char a[10] = "hello"; //10
    char *p = a; //8 64bit
    // cout<<sizeof(p);
    fun(a);
}