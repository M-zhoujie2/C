//
// Created by zhoujie on 2017/12/15.
//

//程序清单6.3 while.c 程序
//while.c -- 注意花括号的使用
//糟糕代码创建了一个无限循环
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int n = 0;
    while (n < 3)
        printf("n is %d\n", n);
        n++;
    printf("That's all this program does\n");
    return EXIT_SUCCESS;
}

