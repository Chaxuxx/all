#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int num;
        vector<int>a;
        vector<int>b;
        while(n--)
        {
            cin >> num;
            a.emplace_back(num);
        }
        n = a.size()-1;
        while(n--)
        {
            cin >> num;
            b.emplace_back(num);
        }
        
        vector<int>copy = a;
        sort(copy.begin(),copy.end());
        
        if(a.size()%2 == 1)cout<<copy[a.size()/2];
        if(a.size()%2 == 0)cout<<((double)copy[a.size()/2] + (double)copy[a.size()/2 - 1])/2;
        // for(int i :copy)
        // {
        //     cout <<i;
        // }
        for(int i = 0;i<b.size();i++)
        {
            int itn = b[i] -1;//数组下标从1开始
            auto it = a.begin();
            while(itn--)
            {
                it++;
            }
            for(int j = i+1;j<b.size();j++)
            {
                if(b[j]>b[i]) b[j]--;
            }
            
            a.erase(it);
            copy = a;
            sort(copy.begin(),copy.end());
            if(a.size()%2 == 1)cout<<" "<<copy[a.size()/2];
            if(a.size()%2 == 0)cout<<" "<<((double)copy[a.size()/2] + (double)copy[a.size()/2 - 1])/2;
        }
        cout<<endl;
        
    }
}