//
// Created by zhoujie on 2017/12/13.
//

//程序清单5.11 post_pre.c 程序
//post_pre.c -- 前缀和后缀
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int a = 1, b = 1;
    int a_post, pre_b;
    a_post = a++; //后缀递增
    pre_b = ++b; //前缀递增
    printf("a a_post b pre_b\n");
    printf("%1d %5d %5d\n", a, a_post, b, pre_b);
    return EXIT_SUCCESS;
}

