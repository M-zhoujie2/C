//
// Created by zhoujie on 2017/12/17.
//

//程序清单8.2 echo_eof.c 程序
//echo_eof.c -- 重复输入，直到文件结尾

#include <stdio.h>
#include <stdlib.h>
int main (void) {
    int ch;
    while ((ch = getchar()) != EOF)
        putchar(ch);
    return EXIT_SUCCESS;
}