#include <stdio.h>
#include <math.h>
/**
 * https://www.icourse163.org/learn/ZJU-199001?tid=1470101496#/learn/ojhw?id=1242924965
 * @return
 */
int main()

{
    int num = 0;
    scanf("%d",&num);
    int len = (num == 0) ? 1 : (int)log10(num) + 1;
    int result = 0;
    for(int n=1;n<=len;n++) {
        int x = num%10;
        if (x%2 == n%2) {
            result += 1*pow(2,n-1);
        }
        num/=10;
    }
    printf("%d",result);
    return 0;
}