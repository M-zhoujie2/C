//
// Created by zhoujie on 2017/12/25.
//

//程序清单11.15 put2.c 程序
//put2.c -- 打印一个字符串，并统计打印的字符数
#include <stdio.h>
#define DEF "I am a #define string"
int put2 (const char *string);

int main (void) {
    int num;
    num = put2(DEF);
    printf("%d", num);
}

int put2 (const char *string) {
    int count = 0;
    while (*string) {
        putchar(*string++);
        count++;
    }
    putchar('\n');
    return count;
}
