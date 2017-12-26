//
// Created by zhoujie on 2017/12/26.
//

//程序清单12.5 parta.c 程序
//parta.c -- 不同的存储类别
//与partb.c 一起编译
#include <stdio.h>
#include <stdlib.h>
#include "partb.c"
void report_count();
void accumulate(int k);
int count = 0; //文件作用域，外部链接

int main (void) {
    int  value; //自动变量
    register int i; //寄存器变量

    printf("Enter a positive integer(0 to quit): ");
    while (scanf("%d", &value) == 1 && value > 0) {
        ++count; //使用文件作用域变量
        for (i = value; i >= 0 ; i--)
            accumulate(i);
        printf("Enter a positive integer (0 to quit): ");
    }
    report_count();
    return EXIT_SUCCESS;
}

void report_count() {
    printf("Loop executed %d times\n", count);
}