#include <iostream>
#include <bitset>
void test_bitset()
{
	std::bitset<10> bs(std::string("1010101010"));
	std::cout << bs << std::endl;
	std::cout << bs.to_ulong() << std::endl;
	std::cout << bs.to_string() << std::endl;
	std::cout << bs.to_string().c_str() << std::endl;
	std::cout << INT32_MAX << std::endl;
	std::cout << UINT16_MAX << std::endl;
	// std::cout << INT_MAX << std::endl;//需要limits头文件
}
namespace dchg{
	std::string whole = "i am the namespace";//及时是在命名空间内，也算是全局变量。命名空间提供了命名控制和访问控制（只有同命名空间才能访问）
	namespace inini{
		std::string whole = "i am the inini";
	
	}

	static int sasa = 1;
}
// std::string whole = "i am the quanjv";
int main(){
	namespace temp = dchg;//局部别名，原来的名字也能用。
	// namespace temp{
		// namespace只能在全局定义
	// }
	// std::string whole = "i am the jvbu";
	std::cout << dchg::whole << std::endl;
	std::cout << dchg::sasa <<std::endl;
	test_bitset();
	return 0;
}