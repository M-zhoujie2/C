//
// Created by zhoujie on 2017/12/10.
//

//使用修饰符和标记的示例
//程序清单4.7 width.c程序
//width.c -- 字段宽度
#include <stdio.h>
#include <stdlib.h>
#define PAGES 959
int main(void) {
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES);
    printf("*%10d*\n", PAGES);
    printf("*%-10d*\n", PAGES);
    return EXIT_SUCCESS;
}

