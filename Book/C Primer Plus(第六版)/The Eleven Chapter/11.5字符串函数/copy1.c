//
// Created by zhoujie on 2017/12/25.
//

//程序清单11.25 copy1.c 程序
//copy1.c -- 演示strcpy()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 40
#define LIM 5
char *s_gets (char *st, int n);

int main (void) {
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words beginning with q:\n", LIM);
    while (i < LIM && s_gets(temp, SIZE)) {
        if (temp[0] != 'q')
            printf("%s doesn't begin with q!\n", temp);
        else {
            strcpy(qwords[i], temp);
            i++;
        }
    }
    puts("Here are the words accepted:");
    for (i = 0; i < LIM; i++)
        puts(qwords[i]);
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