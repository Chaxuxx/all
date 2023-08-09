#include <iostream>
using namespace std;

int main (){
    if (NULL == nullptr)
    cout << "NULL == nullptr 值为 1 ！"<<endl;
    cout <<sizeof(NULL)<<' '<<sizeof(nullptr)<<endl;
    return 0;
}