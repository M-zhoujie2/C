//
// Created by zhoujie on 2017/12/15.
//

//程序清单6.2 when.c程序
//when.c -- 何时退出循环
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n = 5;
    while (n < 7) {
        printf("n = %d\n", n);
        n ++;
        printf("Now n = %d\n", n);
    }
    printf("The loop has finished.\n");
    return EXIT_SUCCESS;
}

