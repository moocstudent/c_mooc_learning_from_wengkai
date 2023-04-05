#include <stdio.h>
#include <math.h>

//question from code2.c
int main() {
    int x = 0;
    scanf("%d", &x);
    //get length from int type
    int len = (x == 0) ? 1 : (int) log10(x) + 1;
    int result = 0;

    printf("length %d\n", len);
    //https://stackoverflow.com/questions/3068397/finding-the-length-of-an-integer-in-c
    for (int i = len; i > 0; i--) {
        result += (x % 10 * pow(10, i - 1));
        x /= 10;
    }

    printf("%d", result);
    return 0;

}