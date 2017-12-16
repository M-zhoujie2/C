//
// Created by zhoujie on 2017/12/16.
//

//程序清单6.12 for_cube.c 程序
//for_cube.c -- 使用for循环创建一个立方表
#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int num;
    printf("    n  n cubed\n");
    for (num = 1; num <= 6; num++)
        printf("%5d %5d\n", num, num * num * num);
    return EXIT_SUCCESS;
}
