//
// Created by zhoujie on 2017/12/12.
//

//程序清单5.1 shoes1.c 程序
//shoes1.c -- 把鞋码转换成英尺

#include <stdio.h>
#include <stdlib.h>
#define ADJUST 7.31
int main(void) {
    const double SCALE = 0.333; // const简介
    double shoe, foot;
    shoe = 9.0;
    foot = SCALE * shoe + ADJUST;
    printf("Shoe size (men's) foot length\n");
    printf("%10.1f %15.2f inches\n", shoe, foot);
    return EXIT_SUCCESS;
}
