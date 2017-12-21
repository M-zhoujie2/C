//
// Created by zhoujie on 2017/12/21.
//

//程序清单9.15 swap3.c 程序
//swap3.c -- 使用指针解决交换函数的问题
#include <stdio.h>
#include <stdlib.h>

void interchange(int *u, int * v);
int main (void) {
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(&x, &y); //把地址发给函数
    printf("Now x = %d and y = %d.\n", x, y);
    return EXIT_SUCCESS;
}

void interchange (int * u, int * v) {
    int temp;
    temp = *u; //temp获得u所指对象的值
    *u = *v;
    *v = temp;
}
