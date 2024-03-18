#include <climits>
#include <limits>
#include <limits.h>
#include <iostream>
using namespace std;

int main(){
    cout<<
    numeric_limits<int>::min()<<" "<<
    numeric_limits<int>::max()<<" "<<
    numeric_limits<int>::lowest()<<" "<<
    numeric_limits<int>::digits<<" "<<
    numeric_limits<int>::digits10<<" "<<
    numeric_limits<int>::is_signed<<" "<<
    numeric_limits<int>::is_integer<<" "<<
    numeric_limits<int>::is_exact<<" "<<
    INT_MIN<<endl<<
    INT_MAX<<endl<<
    LONG_MIN<<endl<<
    CHAR_MIN<<endl<<
    SHRT_MAX<<endl<<
    endl;
}