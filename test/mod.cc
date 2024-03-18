#include<iostream>
using namespace std;
int main(){
    int mod = 1000000007;
    long long result = 0;
    int i = 2000000000;
    while(i--)
    {
        result =(result + i)%mod;
        // cout << result <<" -- "<< result%mod<< endl;
        printf("%lld",result);
        if(result != result%mod)break;
    }
    return 0;
}