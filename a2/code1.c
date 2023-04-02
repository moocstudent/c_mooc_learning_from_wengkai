#include <stdio.h>
//循环
int main()
{
    int x;
    int n=0;
    scanf("%d",&x);
//    n++;
//    x /= 10;
    while(x>0){
        printf("before %d\n",x);
        n++;
        x /= 10;
        printf("after %d\n",x);
    }
    printf("count %d\n",n);
    return 0;
}