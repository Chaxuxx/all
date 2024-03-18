#include <iostream>

#include <vector>
#include <algorithm>
using namespace std;
bool compare(int a, int b){
    return a > b;
}

int main(){
    vector<int> v = {1,5,7,9,2};
    sort(v.begin(), v.end());
    // sort(v.begin(), v.end(),greater<int>());
    sort(v.begin(), v.end(),compare);
    for(int c : v)
    {
        cout << c << endl;
    }
}