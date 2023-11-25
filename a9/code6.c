#include <stdio.h>
#include <math.h>

float collect(float s,float t,int m,float (*p)(float x));
float fun1(float x);

int main(){
    int n,flag;
    float a,b,v=0.0;
    printf("Input the count range(from A to B)and the number of sections.\n");
    scanf("%f%f%d",&a,&b,&n);
    printf("Enter your choice: '1' for fun1,'2' for fun2,'3' for fun3,'4' for fun4==>");
    scanf("%d",&flag);
    if(flag==1){
        v=collect(a,b,n,fun1);
    }
    printf("v=%f\n",v);
    return 0;
}

float collect(float s,float t,int n,float (*p)(float x)){
    float f=0.0;
    return (f);
}

float fun1(float x){
    float fx;
    fx=x*x-2.0*x+2.0;
    return(fx);
}

