//
// Created by zhoujie on 2017/12/9.
//

//strlen函数
//程序清单4.3 praise2.c 程序
//praise2.c
//如果编译器不识别%zd, 尝试换成%u或%lu
#include <stdio.h>
#include <stdlib.h>
#include <string.h> //提供strlen()函数的原型®
#define PRAISE "You are an extraordinary being."
int main(void) {
    char name[40];
    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello %s, %s\n", name, PRAISE);
    printf("Your name of %zd letters occupies %zd memory cells.\n", strlen(name), sizeof name);
    printf("The phrase of praise has %zd letters ", strlen(PRAISE));
    printf("and occupies %zd memory cells.\n", sizeof PRAISE);
    return EXIT_SUCCESS;
}

