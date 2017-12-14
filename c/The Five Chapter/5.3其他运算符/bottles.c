//
// Created by zhoujie on 2017/12/13.
//

//程序清单5.12 bottles.c 程序

#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int main(void) {
    int count = MAX + 1;
    while (--count > 0) {
        printf("%d bottles of spring water on the wall, "
                       "%d bottles of spring water!\n", count, count);
        printf("Take one down and pass it around, \n");
        printf("%d bottles of spring water!\n\n", count - 1);
    }
    return EXIT_SUCCESS;
}

//如果一个变量出现在一个函数的多个参数中，不要对该变量使用递增或递减运算符
//如果一个变量多次出现在一个表达式中，不要对使用递增或递减运算符
