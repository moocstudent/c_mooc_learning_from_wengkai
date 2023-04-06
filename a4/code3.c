#include <stdio.h>

/**
 * 如果函数有参数，调用函数时必须传递给它数量、类型正确的值
 * 可以传递给函数的值是表达式的结果，这包括：
 * 字面量、变量、函数的返回值、计算的结果
 * @param a
 * @param b
 * @return
 */
int max(int a,int b);

int main(){
    int a,b,c;
    a=5;
    b=6;
    c=max(10,12);
    printf("%d\n",c);
    c=max(a,b);
    printf("%d\n",c);
    c=max(c,23);
    printf("%d\n",c);
    c=max(max(23,45),a);
    printf("%d\n",c);
    c=max(23+45,b);
    printf("%d\n",c);
}

int max(int a,int b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}