//
// Created by zhoujie on 2017/12/26.
//

//程序清单12.4 global.c 程序
//global.c -- 使用外部变量
#include <stdio.h>
#include <stdlib.h>
int units = 0; //外部变量
void critic(void);

int main (void) {
    extern int units; //可选的重复声明

    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56)
        critic();
    printf("You must have looked it up!\n");
    return EXIT_SUCCESS;
}

void critic (void) {
    //删除了可选的重复声明
    printf("No lock, my friends. Try again.\n");
    scanf("%d", &units);
}
