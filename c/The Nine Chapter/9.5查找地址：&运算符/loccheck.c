//
// Created by zhoujie on 2017/12/20.
//

//程序清单9.12 loccheck.c程序
//loccheck.c -- 查看变量储存在何处
#include <stdio.h>
#include <stdlib.h>

void mikado(int); //函数原型
int main (void) {
    int pooh = 2, bah = 5; //main()的局部变量

    printf("In main(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In main(), bah = %d and &bah = %p\n", bah, &bah);
    mikado(pooh);
    return EXIT_SUCCESS;
}

void mikado (int bah) {
    int pooh = 10;

    printf("In mikado(), pooh = %d and &pooh = %p\n", pooh, &pooh);
    printf("In mikado(), bah = %d and &bah = %p\n", bah, &bah);
}

