//
// Created by zhoujie on 2017/12/16.
//

//程序清单6.18 rows2.C 程序
//rows2.C -- 依赖外部循环的嵌套循环
#include <stdio.h>
#include <stdlib.h>
int main (void) {
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;

    for (row = 0; row < ROWS; row++) {
        for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
            printf("%C", ch);
        printf("\n");
    }
    return EXIT_SUCCESS;
}
