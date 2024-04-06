//
// Created by tanghuijuan on 2024/4/6.
//
#include <stdio.h>
// 带参数宏可能被inline取代

int main(int argc,char const *argv[]){
    printf("%s:%d\n",__FILE__,__LINE__);
    printf("%s:%d\n",__DATE__,__TIME__);
    return 0;
}
