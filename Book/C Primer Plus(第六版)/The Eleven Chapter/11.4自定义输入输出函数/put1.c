//
// Created by zhoujie on 2017/12/25.
//

//程序清单11.14 put1.c函数
//put1.c -- 打印字符串，不添加\n
#include <stdio.h>
#define DEF "I am a #define string"
void put1(const char *string);

int main (void) {
    put1(DEF);
}

void put1(const char *string) {
    while (*string != '\0')
        putchar(*string++);
}
