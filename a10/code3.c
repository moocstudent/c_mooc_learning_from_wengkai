//
// Created by tanghuijuan on 2023/12/30.
//
#include <stdio.h>

const int red = 0;
const int yellow = 1;
const int green = 2;

/**
 * 今天是元旦放假第一天，早上看孩子做题，刷游戏，我自己出去买了几斤排骨土豆还有其他
 * 零零散散的菜，准备开始做饭。
 * 其实这样做饭非常简单，就是把排骨下锅，土豆下锅，当然就是切好。
 * 然后放上4块钱的佐料，也是袋装的，程序化语言叫"封装"
 * 那天学C时，老师说C的struct并不完全跟java的类一样，
 * java的bean类有私有化的方法或者直接不允许外面访问，C的限制较少。
 * 整体来讲，学C的课程也是大势所趋，毕竟学这个不会有什么太大的问题，
 * 而且属于基础的编程语言，大学生都该学。
 */
int main(int argc, char const *argv[]) {
    int color = -1;
    char *colorName = NULL;

    printf("输入你喜欢的颜色代码：");
    scanf("%d", &color);
    switch (color) {
        case red:
            colorName = "red";
            break;
        case yellow :
            colorName = "yellow";
            break;

        case green:
            colorName = "green";
            break;
        default:
            colorName = "unknown";
            break;

    }
    printf("你喜欢的颜色是%s\n", colorName);
    return 0;
}
