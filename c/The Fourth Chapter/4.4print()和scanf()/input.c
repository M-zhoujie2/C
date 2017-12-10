//
// Created by zhoujie on 2017/12/10.
//

//程序清单4.15 input.c 程序
//input.c -- 何时使用&
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int age; //变量
    float assets; //变量
    char pet[30]; //字符数组，用于储存字符串
    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %f", &age, &assets); //这里要使用&
    scanf("%s", pet); //字符数组不使用&
    printf("%d $%.2f %s\n", age, assets, pet);
    return EXIT_SUCCESS;
}

