//
// Created by zhoujie on 2017/12/10.
//

//程序清单4.10 stringf.c程序
//stringf.C -- 字符串格式
#include <stdio.h>
#include <stdlib.h>
#define BLURB "Authentic imitation!"
int main(void) {
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB);
    printf("[%-24.5s]\n", BLURB);
    return EXIT_SUCCESS;
}
