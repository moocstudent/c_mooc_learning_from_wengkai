#include <stdio.h>

int main()
{
    //监听输入两个数字
//    int a;
//    int b;
//    printf("请输入两个整数: ");
//    scanf("%d %d", &a, &b);
//    printf("%d + %d = %d\n",a,b,a+b);
//    return 0;

    //浮点数输入
    printf("请分别输入身高的英尺和英寸,请输入\"5 7\"表示5英尺7英寸：");
    float foot;
    float inch;
    scanf("%f %f", &foot, &inch);
    printf("身高是%f米。\n",((foot + inch / 12) * 0.3048));
    return 0;
}
