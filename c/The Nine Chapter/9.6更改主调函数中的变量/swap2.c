//
// Created by zhoujie on 2017/12/21.
//

//程序清单9.14 swap2.c 程序
//swap2.c -- 查找swap1.c的问题
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

    printf("Originally u = %d and y = %d.\n", u, v);
    temp = u;
    u = v;
    v = temp;
    printf("Now u = %d and y = %d.\n", u, v);
}