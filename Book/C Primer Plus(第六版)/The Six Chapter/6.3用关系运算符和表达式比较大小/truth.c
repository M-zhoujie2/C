//
// Created by zhoujie on 2017/12/16.
//

//程序清单6.7 truth.c 程序
//truth.C -- 哪些值为真
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n = 3;
    while (n)
        printf("%2d is true\n", n--);
    printf("%2d is false\n", n);

    n = -3;
    while (n)
        printf("%2d is true\n", n++);
    printf("%2d is false\n", n);
    return EXIT_SUCCESS;
}
