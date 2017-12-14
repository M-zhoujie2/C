//
// Created by zhoujie on 2017/12/13.
//

//程序清单5.10 add_one.c 程序
//add_one.c -- 递增前缀和后缀
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int ultra = 0, super = 0;
    while (super < 5) {
        super++;
        ++ultra;
        printf("super = %d, ultra = %d\n", super, ultra);
    }
    return EXIT_SUCCESS;
}
