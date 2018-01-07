//
// Created by zhoujie on 2017/12/9.
//

//常量和C预处理器
//程序清单4.4 pizza.c 程序
//pizza.c -- 在披萨饼中使用已定义的常量
#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159
int main(void) {
    float area, circum, radius;
    printf("What is the radius of your pizza?\n");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2.0 * PI * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumference = %1.2f, area = %1.2f\n", circum, area);
    return EXIT_SUCCESS;
}

