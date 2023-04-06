#include <stdio.h>

/**
 * 调用函数时给的值与参数的类型不匹配是C语言传统上最大的漏洞
 *
 * 编译器总是悄悄替你把类型转换好，但是这很可能不是你所期望的
 *
 * @param i
 */
void cheer(int i){
    printf("cheer %d\n",i);
}
int main(){
    double f=2.0;
    cheer(f);
    return 0;
}