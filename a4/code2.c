#include <stdio.h>
//函数的原型声明（声明不是函数） 这个类似Java的接口和实现类的关系
void sum(int begin,int end);

int main()
{
    sum(1,10);
    sum(20,30);
    sum(35,45);
    return 0;
}

//函数的定义
void sum(int begin,int end)
{
    int i;
    int sum=0;
    for(i=begin;i<=end;i++){
        sum+=i;
    }
    printf("%d到%d的和是%d\n",begin,end,sum);
}