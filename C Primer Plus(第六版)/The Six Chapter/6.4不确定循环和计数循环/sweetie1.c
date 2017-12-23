//
// Created by zhoujie on 2017/12/16.
//

//程序清单6.10 sweetie1.c 程序
//sweetie1.C -- 一个计数循环
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    const int NUMBER = 22;
    int count = 1;

    while (count <= NUMBER) {
        printf("Be my Valentine!\n");
        count++;
    }
    return EXIT_SUCCESS;
}
