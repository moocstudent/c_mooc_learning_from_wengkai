//
// Created by tanghuijuan on 2023/5/5.
//
#include <stdio.h>
#include <string.h>



int main() {
    char str1[20];
    char str2[20];
    int result = 0;


    strcpy(str1,"hello");

    strcpy(str2,"helLO WORLD");

//    result = strncmp(str1,str2,3);
    result = strncmp(str1,str2,4);

    if(result > 0) {
        printf("str1的第一个不匹配字符的 ASCII 值大于str2");
    }else if(result < 0) {
        printf("str1的第一个不匹配字符的 ASCII 值小于str2");
    }else {
        printf("所比较给定位数的字符串相等");
    }

    return 0;
}