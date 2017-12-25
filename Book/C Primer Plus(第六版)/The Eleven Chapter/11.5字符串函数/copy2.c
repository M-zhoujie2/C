//
// Created by zhoujie on 2017/12/25.
//

//程序清单11.26 copy2.c 程序
//copy2.c -- 使用strcpy()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define WORDS "beast"
#define SIZE 40

int main (void) {
    const char *orig = WORDS;
    char copy[SIZE] = "Be the best that you can be.";
    char *ps;

    puts(orig);
    puts(copy);
    ps = strcpy(copy + 7, orig);
    puts(copy);
    puts(ps);
    return EXIT_SUCCESS;
}


