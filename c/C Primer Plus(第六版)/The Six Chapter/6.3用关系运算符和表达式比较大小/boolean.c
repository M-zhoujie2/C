//
// Created by zhoujie on 2017/12/16.
//

//程序清单6.9 boolean.c 程序
//boolean.c -- 使用_Bool类型的变量 variable
#include <stdio.h>
#include <stdlib.h>
int main (void) {
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    input_is_good = (scanf("%ld", &num) == 1);
    while (input_is_good) {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    printf("Those integers sum to %ld.\n", sum);
    return EXIT_SUCCESS;
}

