//
// Created by zhoujie on 2017/12/24.
//

//程序清单11.9 fgets3.c 程序
//fgets3.c -- 使用fgets()
#include <stdio.h>
#include <stdlib.h>
#define STLEN 10

int main (void) {
    char words[STLEN];
    int i;

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n') {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++;
        if (words[i] == '\n')
            words[i] = '\0';
        else //如果word[i] == '\0'则执行这部分代码
            while (getchar() != '\n')
                continue;
        puts(words);
    }
    puts("done");
    return EXIT_SUCCESS;
}