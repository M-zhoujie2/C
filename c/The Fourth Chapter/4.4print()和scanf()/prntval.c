//
// Created by zhoujie on 2017/12/10.
//

//程序清单4.13 prntval.c 程序
//prntval.c -- print()的返回值
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int bqh2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bqh2o);
    printf("The printf() function printed %d characters.\n", rv);
    return EXIT_SUCCESS;
}
