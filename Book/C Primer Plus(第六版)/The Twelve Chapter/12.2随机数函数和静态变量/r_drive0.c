//
// Created by zhoujie on 2017/12/26.
//

//程序清单12.8 r_drive0.c 驱动程序
//r_drive0.c -- 测试rand0()函数
//与rand0.c 一起编译
#include <stdio.h>
#include <stdlib.h>
#include "rand0.c"
extern unsigned int rand0(void);

int main (void) {
    int count;

    for (count = 0; count < 5; count++)
        printf("%d\n", rand0());
    return EXIT_SUCCESS;
}
