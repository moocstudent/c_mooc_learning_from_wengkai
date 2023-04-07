//
// Created by tanghuijuan on 2023/4/7.
//
#include <stdio.h>
/**
 * 因为在函数swap中，传入的参数a和b是被复制的，
 * 也就是说swap函数中的a和b并不是main函数中的a和b，
 * 而是它们的副本。在swap中对a和b的修改只是针对这个副本，
 * 不会影响main函数中的a和b的值。
 * 因此，在主函数中输出a和b的值仍然是原来的值，即5和6。
 * @param a
 * @param b
 */
void swap(int a,int b);
int main(){
    int a=5;
    int b=6;
    swap(a,b);

    printf("a : %d\n",a);
    printf("b : %d\n",b);
    printf("%d-%d\n",a,b);
    return 0;
}

void swap(int a,int b){
    int t = a;
    a=b;
    printf("aft swap a %d\n",a);
    b=t;
    printf("aft swap b %d\n",b);
}