//
// Created by zhoujie on 2017/12/9.
//

//使用字符串
//程序清单4.2 praise1.c 程序
//praise1.c -- 使用不同类型字符串
#include <stdio.h>
#include <stdlib.h>
#define PRAISE "You are an extraordinary being."
int main(void) {
    char name[40];
    printf("What's your name?");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);
    return EXIT_SUCCESS;
}