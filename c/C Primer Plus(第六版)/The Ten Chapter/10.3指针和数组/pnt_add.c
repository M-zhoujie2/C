//
// Created by zhoujie on 2017/12/23.
//

//程序清单10.8 pnt_add.c程序
//pnt_add.c -- 指针地址
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int main (void) {
    short dates[SIZE];
    short * pti;
    short index;
    double bills[SIZE];
    double * ptf;

    pti = dates; //把数组地址赋给指针
    ptf = bills;
    printf("%23s %15s\n", "short", "double");
    for (index = 0; index < SIZE; index++)
        printf("pointers + %d: %10p %10p\n", index, pti + index, ptf + index);
    return EXIT_SUCCESS;
}
