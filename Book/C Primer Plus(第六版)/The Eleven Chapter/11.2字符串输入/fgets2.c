//
// Created by zhoujie on 2017/12/24.
//

//程序清单11.8 fgets2.c程序
//fgets2.c -- 使用fgets()和fputs()
#include <stdio.h>
#include <stdlib.h>
#define STLEN 10

int main (void) {
    char words[STLEN];

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
        fputs(words, stdout);
    puts("Done.");
    return EXIT_SUCCESS;
}
