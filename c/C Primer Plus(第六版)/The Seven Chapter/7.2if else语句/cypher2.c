//
// Created by zhoujie on 2017/12/16.
//

//程序清单7.3 cypher2.c 程序
//cypher2.c -- 替换输入的字母，非字母字符保持不变
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
int main (void) {
    char ch;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) //如果是一个字符
            putchar(ch + 1);
        else
            putchar(ch);
    }
    putchar(ch);
    return EXIT_SUCCESS;
}
