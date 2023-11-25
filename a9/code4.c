//
// Created by tanghuijuan on 2023/11/11.
//
#include <stdio.h>

int main(){
    int cock, hen, chick;
    for(cock = 0; cock <= 20; cock++){
        for(hen = 0; hen <= 33; hen++){
            for(chick = 0; chick <= 99; chick++){
                if(5 * cock + 3 * hen + chick / 3 == 100 && cock + hen + chick == 100 && chick % 3 == 0){
                    printf("公鸡：%d，母鸡：%d，小鸡：%d\n", cock, hen, chick);
                }
            }
        }
    }
    return 0;
}