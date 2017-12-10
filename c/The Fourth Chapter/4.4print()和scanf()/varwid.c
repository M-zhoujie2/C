//
// Created by zhoujie on 2017/12/10.
//

//程序清单4.16 varwid.c 程序
//varwid.c -- 使用变量输出字段
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("Enter a field width:\n");
    scanf("%d", &width);
    printf("The number is :%*d:\n", width, number); //把*放到%和转换字符之间时，会跳过相应的输出项, print和scanf
    printf("Now enter a width and a precision:\n");
    scanf("%d %d", &width, &precision);
    printf("Weight = %*.*f\n", width, precision, weight);
    printf("Done!\n");
    return EXIT_SUCCESS;
}

