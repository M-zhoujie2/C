//
// Created by zhoujie on 2017/12/12.
//

//程序清单5.3 golf.c 程序
//golf.c -- 高尔夫竞标赛积分卡
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int jane, tarzan, cheeta;
    cheeta = tarzan = jane = 68;
    printf("cheeta tarzan jane\n");
    printf("First round score %4d %8d %8d\n", cheeta, tarzan, jane);
    return EXIT_SUCCESS;
}
