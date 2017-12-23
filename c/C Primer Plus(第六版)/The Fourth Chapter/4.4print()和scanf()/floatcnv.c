//
// Created by zhoujie on 2017/12/10.
//

//程序清单4.12 floatcnv.c 程序
//floatcnv.c -- 不匹配的浮点型转换
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float n1 = 3.0;
    double n2 = 3.0;
    long n3 = 2000000000;
    long n4 = 1234567890;

    printf("%.1e %.1e %.1e %.1e", n1, n2, n3, n4);
    printf("%ld %ld\n", n3, n4);
    printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
    return EXIT_SUCCESS;
}

