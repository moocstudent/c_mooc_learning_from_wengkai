#include <stdio.h>
#include <math.h>

/**
 * area = sqrt (s(s-a)(s-b)(s-c))
 * @return
 */
int main()
{
    float a,b,c,s;
    double area;
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    printf("%f\n",s);
    float d = s * ((s - a) * (s - b) * (s - c));
    printf("%f\n",d);
    area=sqrt(d);
    printf("The area of triangle is %f\n",area);
    return 0;
}