//
// Created by zhoujie on 2017/12/23.
//

//程序清单10.2 no_data.c 程序
//no_data.c 程序
#include <stdio.h>
#include <stdlib.h>
#define SIZE 4
int main (void) {
    int no_data[SIZE]; //未知初始化数组
    int i;

    printf("%2s%14s\n", "i", "no_data[i]");
    for (i = 0; i < SIZE; i++) {
        printf("%2d%14d\n", i, no_data[i]);
    }
    return EXIT_SUCCESS;
}
