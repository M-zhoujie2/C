//
// Created by zhoujie on 2017/12/10.
//

//程序清单4.9 flags.c 程序
//flags.c -- 演示一些格式标记
#include <stdio.h>
#include <stdlib.h>
int main (void) {
    printf("%x %X %#x\n, 31, 31, 31");
    printf("**%d**% d**% d**\n, 42, 42, -42");
    printf("**%5d**%5.3d**%05d**%05.3d**\n", 6, 6, 6, 6);
    return EXIT_SUCCESS;
}

