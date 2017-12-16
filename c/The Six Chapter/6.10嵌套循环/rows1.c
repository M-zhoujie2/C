//
// Created by zhoujie on 2017/12/16.
//

//程序清单6.17 rows1.c程序
//rows1.c -- 使用嵌套循环
#include <stdio.h>
#include <stdlib.h>
#define ROWS 6
#define CHARS 10
int main(void) {
    int row;
    char ch;
    for (row = 0; row < ROWS; row++) {
        for (ch = 'A'; ch < ('A' + CHARS); ch++)
            printf("%c", ch);
        printf("\n");
    }
    return EXIT_SUCCESS;
}
