//
// Created by zhoujie on 2017/12/16.
//

//程序清单6.11 sweetie2.c 程序
//sweetie2.c -- 使用for循环的计数循环
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    const int NUMBER = 22;
    int count;

    for (count = 1; count <= NUMBER; count++)
        printf("Be my Valentine!\n");
    return EXIT_SUCCESS;
}
