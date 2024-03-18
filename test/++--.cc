#include <iostream>
using namespace std;
// int f(int x,char *p){}
int main(){
    int i = 9,j = 1;
    // i++  =  j--; // 后自增返回的是const值（未自增） 为了避免i++++的情况 
    char *p = "Hello";
    char *p2 = "World";
    // p2 = p2 + 4;
    // *p++=*p2++; //自增了一个数组的大小 segment fault
    // p[1]
    cout<<*(p++)<<" " ; //*p是char p是char*
    // // cout<<(*p)++<<endl; segment fault
    cout<<*p<<" "<<p++<<" "<<" "<<&p<<endl;
    // int i,sum;
    // for(int i = 0;i<9;i++)
    // cout<<i;
    // char ts[]={"hello\0"};
    // cout<<ts;
    // int a,b;
    // int (*p)(int ,char*) = f;
    // // int k = 25.9%3;
    // int *p = &i;
    // enum kk{1,2,3};
    int a =1;
    // int b = (a++)++;
    // int b = a++++;
    int b = (++a)++;
    cout<<b;
    // (a++)++;
    (++a)++;
    ++(++a);
}