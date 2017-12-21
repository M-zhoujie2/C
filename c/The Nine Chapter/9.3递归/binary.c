//
// Created by zhoujie on 2017/12/18.
//

//程序清单9.8 binary.c 程序
//binary.c -- 以二进制形式打印至整数
#include <stdio.h>
#include <stdlib.h>
void to_binary(unsigned long n);

int main (void) {
    unsigned long number;
    printf("Enter an integer (q to quit):\n");
    while (scanf("%lu", &number) == 1) {
        printf("Binary equivalent: ");
        to_binary(number);
        putchar('\n');
        printf("Enter an integer (q to quit):\n");
    }
    printf("Done.\n");
    return EXIT_SUCCESS;
}

void to_binary(unsigned long n) {//递归函数
    int r;
    r = n % 2;
    if (n >= 2)
        to_binary(n / 2);
    putchar(r == 0 ? '0' : '1');
    return;
}