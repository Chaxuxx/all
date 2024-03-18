#include <iostream>
using namespace std;
int main(){
	int a[2] = {1,2};
	cout<<a[2];//栈访问超限 使用asan能够检测出内存访问相关报错
	return 0;
}
