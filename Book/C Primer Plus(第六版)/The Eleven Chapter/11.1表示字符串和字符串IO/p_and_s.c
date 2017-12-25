//
// Created by zhoujie on 2017/12/24.
//

//程序清单11.5 p_and_s.c 程序
//p_and_s.c -- 指针和字符串
#include <stdio.h>
#include <stdlib.h>
int main (void) {
    const char *mesg = "Don't be a fool!";
    const char *copy;

    copy = mesg;
    printf("%s\n", copy);
    printf("mesg = %s; &mesg = %p; value = %p\n", mesg, &mesg, mesg);
    printf("copy = %s; &copy = %p; value = %p\n", copy, &copy, copy);
    return EXIT_SUCCESS;
}
