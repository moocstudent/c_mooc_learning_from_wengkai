#include <stdio.h>
//判定
int main()
{
    int i,j,k;
    i=3;j=2;k=1;
    printf("%d\n",i<j); //0
    printf("%d\n",j<k); //0
    printf("%d\n",i<j == j<k); // 0 == 0 : 1(true)
}