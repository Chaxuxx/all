#include <vector>
#include <algorithm>
#include<iostream>
using namespace std;
//https://leetcode.cn/problems/spiral-matrix-ii/
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrixnn(n,vector<int>(n,0));//需要初始化，因为需要以二维数组形式调用

        //矩阵 每个方向都要写单独的逻辑 
        //用3*3矩阵举例，确定要用到哪些标志变量
        
        int len = n - 1;//一行的进行长度
        int numofrows = n / 2;//要转几周
        int hang = 0;//本周开始的坐标
        int lie = 0;
        int init = 1;//填充值
        int ji = n % 2 ;//基数矩阵需要填充中心点
        while(numofrows > 0){
            for(int i = 0;i < len; i++)
            {
                matrixnn[hang][lie + i] = init++;
            }

            for(int i = 0;i < len; i++)
            {
                matrixnn[hang + i][lie + len] = init++;
            }

            for(int i = 0;i < len; i++)
            {
                matrixnn[hang + len][lie + len - i] = init++;
            }

            for(int i = 0;i < len; i++)
            {
                matrixnn[hang + len -i][lie] = init++;
            }

            hang++;
            lie++;
            numofrows--;
            len -= 2;

        }
        if(ji == 1)
        {
            matrixnn[hang][lie] = init;
        }
        return matrixnn;
        

    }
};

int main(){
    Solution a;
    vector<vector<int>> t = a.generateMatrix(4);
    for(auto it : t)
        {
            for(int i : it)
            {
                cout<< i <<" ";
            }
            cout<<endl;
        }

}
