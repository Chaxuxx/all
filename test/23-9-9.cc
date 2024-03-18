#include <iostream>
using namespace std;
int main(){
    //乘同余法
    // int a = 11;
    // int i =1;
    // int x=a*i;
    // while(x!=1)
    // {
    //     x=x*a%64;
    //     cout<<x<<endl;
    // }
    int M = 64;
    int a = 13;
    int c = 7;
    int x = 1;
    while((a*x+c)%M!=1)
    {
        x=(a*x+c)%M;
        cout<<x<<endl;
    }
}
