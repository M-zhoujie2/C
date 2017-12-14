//
// Created by zhoujie on 2017/12/13.
//

//程序清单5.9 min_sec.c 程序
//min_sec.c -- 把秒数转换成分和秒
#include <stdio.h>
#include <stdlib.h>
#define SEC_PRE_MIN 60
int main(void) {
    int sec, min, left;
    printf("Convent seconds to minutes and seconds!\n");
    printf("Enter the number of seconds (<=0 to quit):\n");
    scanf("%d", &sec); //读取秒数
    while (sec > 0) {
        min = sec / SEC_PRE_MIN; //截断分钟数
        left = sec % SEC_PRE_MIN; //剩下的秒数
        printf("%d seconds is %d minutes, %d seconds.\n", sec, min, left);
        printf("Enter next value (<=0 to quit):\n");
        scanf("%d", &sec);
    }
    printf("Done!\n");
    return EXIT_SUCCESS;
}