//
// Created by zhoujie on 2017/12/15.
//

//程序清单6.1 summing.c 程序
//summing.c -- 根据用户键入整数求和
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long num;
    long sum = 0L; //把sum初始化为0
    int status;
    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status == 1) {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
    return EXIT_SUCCESS;
}

