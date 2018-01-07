//
// Created by zhoujie on 2017/12/25.
//

//程序清单11.31 repeat.c 程序
//repeat.c -- 带参数的main()
#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[]) {
    int count;

    printf("The command line has %d arguments:\n", argc - 1);
    for (count = 1; count < argc; count++)
        printf("%d: %s\n", count, argc[count]);
    printf("\n");
    return EXIT_SUCCESS;
}