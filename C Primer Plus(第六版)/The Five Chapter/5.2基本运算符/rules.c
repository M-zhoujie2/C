//
// Created by zhoujie on 2017/12/13.
//

//程序清单5.7 rules.c 程序
//rules.c -- 优先级测试
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int top, score;
    top = score = -(2 + 5) * 6 + (4 + 3 * (2 + 3));
    printf("top = %d, score = %d\n", top, score);
    return EXIT_SUCCESS;
}

