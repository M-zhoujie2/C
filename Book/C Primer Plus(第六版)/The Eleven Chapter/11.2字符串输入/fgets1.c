//
// Created by zhoujie on 2017/12/24.
//

//程序清单11.7 fgets1.c程序
//fgets1.c -- 使用fgets()和fputs()
#include <stdio.h>
#include <stdlib.h>
#define STLEN 14

int main (void) {
    char words[STLEN];

    puts("Enter a string please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Enter another string, please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");
    return EXIT_SUCCESS;
}
