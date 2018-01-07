//
// Created by zhoujie on 2017/12/25.
//

//程序清单11.21 compare.c 程序
//compare.c -- 该程序可以正常运行
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ANSWER "Grant"
#define SIZE 40
char *s_gets (char *st, int n);

int main (void) {
    char try[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    while (strcmp(try, ANSWER) != 0) {
        puts("No, that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");
    return EXIT_SUCCESS;
}

char *s_gets(char *st, int n) {
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
