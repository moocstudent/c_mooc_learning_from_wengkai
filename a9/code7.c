//
// Created by tanghuijuan on 2023/11/15.
/**
 * 定义一个表示三维空间点坐标的结构类型，通过函数求空间上任意两点之间的距离。
 */
//
#include <stdio.h>
#include <math.h>

struct point{
    float x;
    float y;
    float z;
};

float dist(struct point p1,struct point p2){
    float x,y,z;
    float d;
    x=fabs(p1.x-p2.x);
    y=fabs(p1.y-p2.y);
    z=fabs(p1.z-p2.z);
    d= sqrt(x*x+y*y+z*z);
    return d;
}

int main(){
    struct point p1,p2;
    printf("Enter point1 (for example 1,2,3): ");
    scanf("%f,%f,%f",&p1.x,&p1.y,&p1.z);
    printf("Enter point2 (for example 3,2,1): ");
    scanf("%f,%f,%f",&p2.x,&p2.y,&p2.z);
    printf("distance: %f\n", dist(p1,p2));
    return 0;
}