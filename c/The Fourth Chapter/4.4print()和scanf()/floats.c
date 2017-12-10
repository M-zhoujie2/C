//
// Created by zhoujie on 2017/12/10.
//

//程序清单4.8 floats.c 程序
//floats.c -- 一些浮点型修饰符的组合
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    const double RENT = 3852.99; //const常量
    printf("*%f*\n", RENT);
    printf("*%e*\n", RENT);
    printf("*%4.2f*\n", RENT);
    printf("*%3.1f*\n", RENT);
    printf("*%10.3f*\n", RENT);
    printf("*%10.3E*\n", RENT);
    printf("*%+4.2f*\n", RENT);
    printf("*%010.2f*\n", RENT);
    return EXIT_SUCCESS;
}
