//
// Created by zhoujie on 2017/12/25.
//

//程序清单11.17 test_fit.c 程序
//test_fit.c -- 使用缩短字符串函数的参数
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fit(char *, unsigned int);

int main (void) {
    char mesg[] = "Thinks should be as simple as possible,"
            "but not simpler";
    puts(mesg);
    fit(mesg, 38);
    puts(mesg);
    puts("Let's look at some more of the string.");
    puts(mesg + 39);
    return EXIT_SUCCESS;
}

void fit(char *string, unsigned int size) {
    if (strlen(string) > size)
        string[size] = '\0';
}
