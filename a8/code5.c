#include <stdio.h>
#include "time.h"

int sum_c(int num1, int num2) {
    return num1 + num2;
}

int main() {
    int i;
    long current1 = time(NULL);
    for (i = 0; i < 1000000000; i++) {
        int sum = sum_c(i, i + 1);
    }
    long cExeTime = time(NULL) - current1;
    printf("执行时间 %d ms\n", cExeTime);

    return 0;
}