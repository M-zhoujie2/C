//
// Created by zhoujie on 2017/12/10.
//

//程序清单4.11 intconv.C 程序
//intconv.C -- 一些不匹配的整型特换
#include <stdio.h>
#include <stdlib.h>
#define PAGES 336
#define WORDS 65618
int main(void) {
    short num = PAGES;
    short mnum = -PAGES;
    printf("num as short and unsigned short: %hd %hu\n", num, num);
    printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
    printf("num as int and char: %d %C\n", num, num);
    printf("WORDS as int, short, and char: %d %hd %C\n", WORDS, WORDS, WORDS);
    return EXIT_SUCCESS;
}
