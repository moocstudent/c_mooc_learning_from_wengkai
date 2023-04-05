#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * 题目内容：
你的程序要读入一个整数，范围是[-100000,100000]。然后，用汉语拼音将这个整数的每一位输出出来。
如输入1234，则输出：
yi er san si
注意，每个字的拼音之间有一个空格，但是最后的字后面没有空格。当遇到负数时，在输出的开头加上“fu”，如-2341输出为：
fu er san si yi
输入格式:
一个整数，范围是[-100000,100000]。
输出格式：
表示这个整数的每一位数字的汉语拼音，每一位数字的拼音之间以空格分隔，末尾没有空格。
输入样例：
-30
输出样例：
fu san ling
 * @return
 */

/**
 * by AI 可以看到AI的思路非常清晰
 * @return
 */
int main()
{
    int n;
    scanf("%d", &n);

    // 如果是负数，输出fu，去掉正负号
    if(n < 0) {
        printf("fu ");
        n = -n;
    }

    // 将数字存入数组，以便分离每一位
    int digit[10];
    int s = 0;

    // 首先运行一遍，确定位数
    do {
        digit[s++] = n % 10;
        n /= 10;
    } while(n);

    // 逆序输出数字拼音
    char* pinyin[] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    for(int i = s - 1; i >= 0; i--) {
        printf("%s", pinyin[digit[i]]);
        if(i != 0) printf(" ");
    }

    return 0;
}