//
// Created by zhoujie on 2017/12/16.
//

//程序清单6.6 t_and_f.c 程序
//t_and_f.C -- C中的真和假的值
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int true_val, false_val;
    true_val = (10 > 2);
    false_val = (10 == 2);
    printf("true = %d; false = %d\n", true_val, false_val);
    return EXIT_SUCCESS;
}
