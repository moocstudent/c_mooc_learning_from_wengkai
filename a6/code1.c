//
// Created by tanghuijuan on 2023/4/9.
//
#include <stdio.h>

int main(){
    #define TABLESIZE 10;
    int num;
    printf("number square cube\n");
    printf("----------------------\n");
    for (num=1;num<=TABLESIZE num+=2){
        printf("%3d%6d%6d\n",num,num*num,num*num*num);
    }
    return 0;
}