//
// Created by zhoujie on 2017/8/31.
//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
//    int a = 0b10;
//    int b = 0xB;
//    int c = 010;
//    printf("a=%d, b=%d, c=%d", a, b, c);
//    return 0;

//    float a = 3; //单精度 4字节 32位
//    double b = 3.1; //双精度 8字节 64位
//    long double c = 3.1; //长双精度 16字节 128位
//    printf("a=%f, b=%f, c=%Lf", a,b,c);

//    printf("Hello\nWorld");
//    printf("Hello\rWorld");
//    printf("Hello\bWorld");

//    char ch = 'A';
//    printf("%d\n", ch);
//    printf("%c\n", ch + 32);
//    return 0;
//    __int32_t a = 8;
//    __int32_t b = 10;
//
//    if (a > b) {
//        printf("Max num is a, %d\n", a);
//    } else {
//        printf("Max num is b, %d\n", b);
//    }
//    for (int i=1; i<=9; i++) {
//        for (int j=1; j<=i; j++) {
//            printf("%d*%d=%d\t", i, j, i*j);
//        }
//        printf("\n");
//    }
//    __int32_t a = (10 + 2 - 8) * 9 / 3;
//    printf("%d\n", a);
//    printf("%f\n", sin(M_PI/2));

    /**
     * & 位与
     * | 位或
     * - 位反
     * ^ 异或
     * >> 右移
     * << 左移
     **/
//    int a = 0b11;
//    int b = 0b01;
//    __uint8_t c = 1; //0b00000001 求反 0b11111110
//    c = ~c;
//    printf("%d\n", c);
//    return 0;

    uint32_t color = 0xFFFEFAFB;//ARGB(Alpha, Red, Green, Blue)
    uint32_t tmp = color&0x00FF0000;
    uint8_t red = tmp >> 16;

    printf("%d\n", red);
    return EXIT_SUCCESS;
}

