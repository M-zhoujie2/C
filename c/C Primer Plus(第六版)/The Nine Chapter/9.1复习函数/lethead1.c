//
// Created by zhoujie on 2017/12/18.
//

//程序清单9.1 lethead1.c 程序
//lethead1.c 程序
#include <stdio.h>
#include <stdlib.h>
#define NAME "GIGATHINK, ING"
#define ADDRESS "101 Megabuck Plaza"
#define PLACE "Megapolis, CA 94904"
#define WIDTH 40

void starbar(void); //函数原型
int main(void) {
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    printf("%s\n", PLACE);
    starbar(); //使用函数
    return EXIT_SUCCESS;
}

void starbar(void) { //定义函数
    int count;

    for (int count = 1; count <= WIDTH; count++)
        putchar('*');
    putchar('\n');
}