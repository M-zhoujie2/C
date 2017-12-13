//
// Created by zhoujie on 2017/12/12.
//

//程序清单5.2 shoes2.c 程序
//shoes2.c -- 计算多个不同鞋码对应的脚长
#include <stdio.h>
#include <stdlib.h>
#define ADJUST 7.31 //字符常量
int main(void) {
    cosnt double SCALE = 0.333; //const常量
    double shoe, foot;
    printf("Shoe size (men's) foot length\n");
    shoe = 3.0;
    while (shoe < 18.5) //while循环开始
    {                   //块开始
        foot = SCALE * shoe + ADJUST;
        printf("%10.1f %15.2f inches\n", shoe, foot);
        shoe = shoe + 1.0;
    }                   //块结束
    printf("If the shoe fits, wear it.\n");
    return EXIT_SUCCESS;
}

