#include <stdio.h>
#include <stdlib.h>

// c语言中的合并两个有序字符串
// c语言谁会写啊

int * combine_arrays(int * a, int na, int * b, int nb)
{
    int *p =(int *)malloc(sizeof(int)*(na+nb));
    printf("%ld ",sizeof(a));//[]不能作为完成类型写在形参里 c语言只能在main获取长度
    int i = 0,j = 0,k = 0;
    while(i<na&&j<nb)
    {
        p[k++] = a[i]>b[j]?b[j++]:a[i++];
    }
    while(i < na) p[k ++ ] = a[i ++ ];
    while(j < nb) p[k ++ ] = b[j ++ ];
    return p;
    
    
}
int main(){
    int a[] = {1,2,5,7,9};
    int b[] = {3,5,6,8,10,15};
    
    int na = sizeof(a)/sizeof(int);//如此获取数组大小
    int nb = sizeof(b)/sizeof(int);
    int *p = combine_arrays(a,na,b,nb);
    for(int i = 0;i<na+nb;i++)
    {
        printf("%d ",p[i]);
    }
    free(p);

}