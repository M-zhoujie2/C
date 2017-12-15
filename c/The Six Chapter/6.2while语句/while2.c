//
// Created by zhoujie on 2017/12/15.
//

//程序清单6.4 while2.c 程序
//while2.c -- 注意分号的位置
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n = 0;
    while (n++ < 3);
        printf("n is %d\n", n);
    printf("That's all this program does.\n");
    return EXIT_SUCCESS;
}

