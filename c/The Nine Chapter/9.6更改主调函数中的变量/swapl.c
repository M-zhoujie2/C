//
// Created by zhoujie on 2017/12/21.
//

//程序清单9.13 swap1.c程序
//swap1.c -- 第一个版本的交换函数
#include <stdio.h>
#include <stdlib.h>
void interchange(int u, int v);

int main (void) {
    int x = 5, y = 10;
    printf("Originally x = %d and y = %d.\n", x, y);
    interchange(x, y);
    printf("Now x = %d and y = %d.\n", x, y);
    return EXIT_SUCCESS;
}

void interchange(int u, int v) {
    int temp;
    temp = u;
    u = v;
    v = temp;
}
