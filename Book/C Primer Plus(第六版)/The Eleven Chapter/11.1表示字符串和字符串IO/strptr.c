//
// Created by zhoujie on 2017/12/23.
//

//程序清单11.2 strptr.c 程序
//strptr.c -- 把字符串看作指针
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    printf("%s, %p, %c\n", "We", "are", *"space farers");
    return EXIT_SUCCESS;
}