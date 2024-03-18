#include <iostream>
#include <string.h> //包含strlen 是C风格的

using namespace std;
int main(){
    string a = "Hello";
    const char * b = "World";//如果是char *的话，strlen会自动进行类型转换？
    cout << a.length() << endl;
    cout << strlen(b) << endl;
}