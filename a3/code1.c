#include <stdio.h>
//循环判定计数
int main(){
    int x;
    //声明双精度浮点数
    double sum = 0;
    int cnt = 0;
    scanf("%d", &x);

    while(x!=-1){
        sum+=x;
        cnt++;
        scanf("%d",&x);
    }
    if(cnt>0){
        //%f用于输出浮点数
        printf("%f\n",sum/cnt);
    }

    /**
     * 123
     * 123
     * 123
     * -1
     * 123.000000
     */
}