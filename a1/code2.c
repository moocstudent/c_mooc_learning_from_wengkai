#include <stdio.h>
//输入
int main()
{
    //简单版本
//    int price = 0;
//    printf("请输入金额（元）：");
//    scanf("%d",&price);
//    int change = 100 - price;
//    printf("找您%d元\n",change);
//    return 0;

    //判定版本
//    int price=0;
////   同样可以 int price;
//    printf("请输入金额（元）：");
//    scanf("%d",&price);
//    while(price>=100){
//        printf("请输入低于100元的金额（元）：");
//        scanf("%d",&price);
//    }
//    int change = 100 - price;
//    printf("找您%d元\n",change);
//    return 0;


//    int a = 0;
//    int b = 0;
//    scanf("price%d %d", &a, &b);
//    printf("%d %d\n",a,b);
//    return 0;
    const int AMOUNT = 100;
    int price = 0;
    printf("请输入金额（元）：");
    scanf("%d", &price);
    int change = AMOUNT - price;
    printf("找您%d元。\n",change);
    return 0;

}