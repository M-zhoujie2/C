//
// Created by zhoujie on 2017/12/17.
//

//程序清单7.8 paint.C 程序
//paint.c -- 使用条件运算符
#include <stdio.h>
#include <stdlib.h>
#define COVERAGE 350 //每罐油漆可刷的面积
int main (void) {
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d", &sq_feet) == 1) {
        cans = sq_feet / COVERAGE;
        cans += ((sq_feet % COVERAGE == 0)) ? 0 : 1;
        printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
        printf("Enter next value (q to quit):\n");
    }
    return EXIT_SUCCESS;
}
