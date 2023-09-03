//
// Created by tanghuijuan on 2023/9/3.
//
#include <stdio.h>
#include <string.h>

/**
 * int strcmp(const char *str1,const char *str2,size_t n)
 * str1 : 第一个字符串 first character
 * str2 : 第二个字符串 second character
 * n : 需要比较的字符数
 * 返回值：
 * 本函数仅比较字符串的前n个（指定数量）字符，并根据比较返回以下值。
 * 0 : 如果字符串str1和str2都相等（比较的字符数内相等）
 * >0 : 如果str1的第一个不匹配字符的ASCII值大于str2
 * <0 : 如果str1的第一个不匹配字符的ASCII值小于str2
 * @return
 */

int main() {
    char str1[20];
    char str2[20];
    int result;
    //Assigning the value to the string str1
    strcpy(str1, "hello");
    //Assigning the value to the string str2
    strcpy(str2, "helLO WORLD");
    //This will compare the first 3 characters
    result = strncmp(str1, str2, 3);
    int result2 = strncmp(str1, str2, 5);
    printf("result: %d\n", result);//相等
    printf("result2: %d\n", result2);//不相等
    return 0;
}