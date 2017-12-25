//
// Created by zhoujie on 2017/12/24.
//

//程序清单11.6 getsputs.c 程序
//getsputs.c -- 使用gets()和puts()
#include <stdio.h>
#include <stdlib.h>
#define STLEN 81

char * s_gets(char *st, int n);
int main (void) {
    char words[STLEN];

    puts("Enter a string, please.");
    s_gets(words, STLEN); //典型用法
    printf("Your string twice:\n");
    printf("%s\n", words);
    puts(words);
    puts("Done.");
    return EXIT_SUCCESS;
}

char * s_gets(char *st, int n) {
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) { //即，ret_val != NULL
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }
    return ret_val;
}