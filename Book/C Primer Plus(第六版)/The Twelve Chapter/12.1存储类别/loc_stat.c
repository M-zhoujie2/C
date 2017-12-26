//
// Created by zhoujie on 2017/12/26.
//

//程序清单12.3 loc_stat.c 程序
//loc_stat.c -- 使用局部静态变量
#include <stdio.h>
#include <stdlib.h>
void trystat(void);

int main (void) {
    int count;

    for (count = 1; count <= 3 ; count++) {
        printf("Here comes iteration %d:\n", count);
        trystat();
    }
    return EXIT_SUCCESS;
}

void trystat(void) {
    int fade = 1;
    static int stay = 1;

    printf("fade = %d and stay = %d\n", fade++, stay++);
}