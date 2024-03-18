#include <iostream>
#include<vector>
#include <algorithm>
#include <map>


using namespace std;

int main(){
    int a = -1;
    int c = 1;
    if(a<=0){}
    else if(c++>0){} //如果满足a<=0 判断语句还会执行吗 不会
    else{}
    cout<<a<<c;
    map<char,int>val{{1,2},{3,4}};
    vector<pair<char, int>>result(val.begin(), val.end());
    sort(result.begin(), result.end(),[](auto &a, auto &b){
    return a.second > b.second;});
    for_each(result.begin(),result.end(),[](auto & a){cout<<a.first<<" "<<a.second;});
    map<int, int> mp;
    // for (auto [x, y]: mp){};C++17
}