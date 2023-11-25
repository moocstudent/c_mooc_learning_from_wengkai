//
// Created by tanghuijuan on 2023/11/11.
//超过大数无法显示
//
#include <stdio.h>
#include <_types/_uintmax_t.h>

uintmax_t multiplyNumbers(uintmax_t n);

int main(){
    uintmax_t n;
    printf("请输入一个整数：");

    scanf("%ju",&n);
    while(n>65){
        printf("请输入一个整数 不要大于65：");

        scanf("%ju",&n);
    }
    printf("%ju!=%ju",n, multiplyNumbers(n));
    return 0;
}

uintmax_t multiplyNumbers(uintmax_t n){
    printf("multiplyNumbers n %ju\n",n);
    if(n>1){
        return n* multiplyNumbers(n-1);
    }else{
        return 1;
    }
}