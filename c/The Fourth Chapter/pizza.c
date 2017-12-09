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

//程序清单4.5 defines.c 程序
//defines.c -- 使用limit.h 和 float头文件中定义的明示常量
#include <limits.h> //整形限制
#include <float.h> //浮点型限制
int main (void) {
    printf("Some number limits for this system:\n");
    printf("Biggest int： %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system. \n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);
    return EXIT_SUCCESS;
}

