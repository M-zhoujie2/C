//
// Created by zhoujie on 2017/12/17.
//

//程序清单7.10 break.c 程序
//break.C -- 使用break退出循环
#include <stdio.h>
#include <stdlib.h>
int main (void) {
    float length, width;

    printf("Enter the length of the rectangle:\n");
    while (scanf("%f", &length) == 1) {
        printf("Length = %0.2f:\n", length);
        printf("Enter its width:\n");
        if (scanf("%f", &width) != 1)
            break;
        printf("Width = %0.2f:\n", width);
        printf("Area = %0.2f:\n", length * width);
        printf("Enter the length of the rectangle:\n");
    }
    printf("Done.\n");
    return EXIT_SUCCESS;
}
