//
// Created by tanghuijuan on 2023/12/27.
//
#include <stdio.h>

int main(int argc,char const *argv[]){
    struct date{
        int month;
        int day;
        int year;
    };

    struct date today;

    today.month = 12;
    today.day = 27;
    today.year = 2023;

    printf("Today's date is %i-%i-%i. \n",
           today.year,today.month,today.day);

    return 0;
}