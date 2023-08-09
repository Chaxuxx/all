#include <iostream>

namespace std {

void run(){
    int a = 1;
    cout<<sizeof(a);
}


}

int main(){
    std::run();//main不能写在namespace里
    // return 0; return 0会自动添加
}