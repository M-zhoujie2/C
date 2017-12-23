//
// Created by zhoujie on 2017/12/14.
//

//程序清单5.14 convert.C 程序
//convert.C -- 自动类型转换
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    char ch;
    int i;
    float fl;
    fl = i = ch = 'C';
    printf("ch = %C, i = %d, fl = %2.2f\n", ch, i, fl);
    ch = ch + 1;
    i = fl + 2 * ch;
    fl = 2.0 * ch + i;
    printf("ch = %C, i = %d, fl = %2.2f\n", ch, i, fl);
    ch = 1107;
    printf("Now ch = %C\n", ch);
    ch = 80.89;
    printf("Now ch = %C\n", ch);
    return EXIT_SUCCESS;
}

