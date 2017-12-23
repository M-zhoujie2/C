//
// Created by zhoujie on 2017/12/13.
//

//程序清单5.8 sizeof.c 程序
//sizeof.c -- 使用sizeof运算符
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n = 0;
    size_t intsize;
    intsize = sizeof(int);
    printf("n = %d, n has %zd bytes; all ints have %zd bytes.\n", n, sizeof n, intsize);
}
