//
// Created by zhoujie on 2017/12/16.
//

//程序清单6.8 trouble.c 程序
//trouble.C -- 误用 = 会导致无限循环

#include <stdio.h>
#include <stdlib.h>
int main(void) {
    long num;
    long sum = 0L;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit): ");
    status = scanf("%ld", &num);
    while (status = 1) {
        sum = sum + num;
        printf("Please enter next integer (q to quit): ");
        status = scanf("%ld", &num);
    }
    printf("Those integers sum to %ld.\n", sum);
    return EXIT_SUCCESS;
}
