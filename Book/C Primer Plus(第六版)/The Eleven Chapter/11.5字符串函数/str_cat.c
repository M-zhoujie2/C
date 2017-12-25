//
// Created by zhoujie on 2017/12/25.
//

//程序清单11.18 str_cat.c 程序
//str_cat.c -- 拼接两个字符串
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 80
char *s_gets(char *st, int n);

int main (void) {
    char flower[SIZE];
    char addon[] = "s small like old shoes.";

    puts("What is your favorite flower?");
    if (s_gets(flower, SIZE)) {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }
    else
        puts("End of file encountered!");
    puts("bye");
    return EXIT_SUCCESS;
}

char *s_gets (char *st, int n) {
    char *ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
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

