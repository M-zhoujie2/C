//
// Created by zhoujie on 2017/12/12.
//

//程序清单5.4 squares.c 程序
//squares.c -- 计算1~20的平方
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int num = 1;
    while (num < 21) {
        printf("%4d %6d\n", num, num * num);
        num = num + 1;
    }
    return EXIT_SUCCESS;
}

