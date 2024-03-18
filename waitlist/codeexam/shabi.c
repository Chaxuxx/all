#include <stdio.h>
char * shabi()
{
    char * p = "hllo";
    return p;
}
int main(){
    char *p = shabi();
    while(*p)
    {
        printf("%c",*p++);
    }
}