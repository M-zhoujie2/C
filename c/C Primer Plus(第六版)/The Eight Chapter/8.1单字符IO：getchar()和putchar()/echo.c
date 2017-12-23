//
// Created by zhoujie on 2017/12/17.
//

//程序清单8.1echo.c 程序
//echo.c -- 重复输入
#include <stdio.h>
#include <stdlib.h>
int main (void) {
    char ch;
    while ((ch = getchar()) != '#')
        putchar(ch);
    return EXIT_SUCCESS;
}
