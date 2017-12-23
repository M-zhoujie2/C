//
// Created by zhoujie on 2017/12/16.
//

//程序清单6.15 do_while.c 程序
//do_while.c -- 出口条件循环
#include <stdio.h>
#include <stdlib.h>
int main (void) {
    const int secret_code = 13;
    int code_entered;

    do {
        printf("To enter the triskaidekaphobia therapy club\n");
        printf("please enter the secret code number: ");
        printf("%d", &code_entered);
    } while (code_entered != secret_code);
    printf("Congratulations! You are cured!\n");
    return EXIT_SUCCESS;
}
