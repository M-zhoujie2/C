//
// Created by zhoujie on 2017/12/18.
//

//程序清单9.5 proto.c 程序
//proto.c -- 使用函数原型
#include <stdio.h>
#include <stdlib.h>

int imax(int, int); //函数原型
int main (void) {
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3, 5));
    printf("The maximum of %d and %d is %d.\n", 3, 5, imax(3.0, 5.0));
    return EXIT_SUCCESS;
}

int imax(int n, int m) {
    return (n > m ? n : m);
}
