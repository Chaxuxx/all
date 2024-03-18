#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int sum = 0;
    int hash[n+1]={0};
    while(n)
    {
        if(hash[n]==1) {n--;continue;}
        if(n % 2 == 0)
        {
            hash[n/2] = 1;
        }
        sum+=n;
        cout<<n<<endl;
        n--;
    }
    cout<<sum;
}