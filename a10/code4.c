//
// Created by tanghuijuan on 2023/12/30.
//
#include <stdio.h>

enum COLOR { RED, YELLOW, GREEN};

int main(int argc,char const *argv[]){
    int color = -1;
    char *colorName = NULL;

    printf("输入你喜欢的颜色代码：");
    scanf("%d",&color);
    switch (color) {
        case RED:colorName = "red";break;
        case YELLOW : colorName = "yellow";break;
        case GREEN : colorName = "green";
            break;
        default:colorName="unknown";break;
    }
    printf("你喜欢的颜色是%s\n",colorName);
    return 0;
}