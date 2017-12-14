//
// Created by zhoujie on 2017/12/13.
//

//程序清单5.13 addemup.c 程序
//addemup.c -- 几种常见的语句
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int count, sum;
    count = 0;
    sum = 0;
    while (count++ < 20) {
        sum = sum + count;
        printf("sum = %d\n", sum);
        return EXIT_SUCCESS;
    }
}

