//
// Created by tanghuijuan on 2023/4/8.
//
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d/%d",&a,&b);
    if(!(10<=a<b<100)){
        return -1;
    }else{
        printf("%d.",0);
        int cnt = 0;
        while(cnt<200){
            int shang = a*10 / b;
            int yu = a*10 % b;
            printf("%d",shang);
            if(yu==0){
                break;
            }
            a = yu;
            cnt++;
        }
    }
    return 0;
}