//
// Created by zhoujie on 2017/12/23.
//

//程序清单10.3 some_data.c程序
//some_data.c -- 部分初始化数组
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int main (void) {
    int some_data[SIZE] = { 1492, 1066 };
    int i;

    printf("%2s%14\n", "i", "some_data[i]");
    for (i = 0; i < SIZE; i++)
        printf("%2d%14d\n", i, some_data[i]);
    return EXIT_SUCCESS;
}
