//
// Created by zhoujie on 2017/12/18.
//

//程序清单9.6 recur.c 程序
//recur.c -- 递归演示
#include <stdio.h>
#include <stdlib.h>
void up_and_down(int);

int main (void) {
    up_and_down(1);
    return EXIT_SUCCESS;
}

void up_and_down(int n) {
    printf("Level %d: n location %p\n", n, &n);
    if (n < 4)
        up_and_down(n + 1);
    printf("LEVEL %d: n location %p\n", n, &n);
}
