//
// Created by zhoujie on 2017/12/16.
//

//程序清单7.6 chcount.c 程序
//chcount.c -- 使用逻辑与运算符
#include <stdio.h>
#include <stdlib.h>
#define PERIOD '.'
int main (void) {
    char ch;
    int charcount = 0;
    while ((ch = getchar()) != PERIOD) {
        if (ch != '"' && ch != '\'')
            charcount++;
    }
    printf("There are %d non-quote characters.\n", charcount);
    return EXIT_SUCCESS;
}
