//
// Created by zhoujie on 2017/12/21.
//

//程序清单10.1 day_mon1.c 程序
//day_mon1.c -- 打印每个月的天数
#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12

int main (void) {
    int days[MONTHS] = (31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31);
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %2d days.\n", index + 1, day[index]);
    return EXIT_SUCCESS;
}