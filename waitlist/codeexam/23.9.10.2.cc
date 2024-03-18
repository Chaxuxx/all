#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    int ai;
    vector<int>a;
    while(n--)
    {
        cin >> ai;
        a.emplace_back(ai);
    }
    // if(n==1)cout<<a[0]; //题目理解错了
    // int max = a[0];
    // for(int i = 1;i<a.size();i++)
    // {
    //     if(a[i]>a[i-1]) max=max>a[i]?max:a[i];
    // }
    // cout<<max;
    int result = 0;
    sort(a.begin(),a.end());
    if(a.size()%2 == 0)
    {
        for(int i = a.size()/2;i<a.size();i++)
        {
            result+=a[i];
        }
        for(int i = 0;i<a.size()/2-1;i++)
        {
            result-=a[i];
        }
    }
    if(a.size()%2 == 1)
    {
        for(int i = a.size()/2;i<a.size();i++)
        {
            result+=a[i];
        }
        for(int i = 0;i<a.size()/2;i++)
        {
            result-=a[i];
        }
    }
    cout<<result;
}