//
// Created by zhoujie on 2017/12/18.
//

//程序清单9.4 misuse.c 程序
//misuse.c -- 错误的使用函数
#include <stdio.h>
#include <stdlib.h>
int imax(); //旧式函数声明

int main (void) {
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
    return EXIT_SUCCESS;
}

int imax(n, m)
int n, m;
{
    return (n > m ? n : m);
}