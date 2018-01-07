//
// Created by zhoujie on 2017/12/10.
//

//使用printf()
//程序清单4.6 printout.C 程序
//printout.C -- 使用转换说明
#include <stdio.h>
#include <stdlib.h>
#define PI 3.141593
int main(void) {
    int number = 7;
    float pies = 12.75;
    int cost = 7800;

    printf("The %d contestants ate %f berry pies.\n", number, pies);
    printf("The value of pi is %f.\n", PI);
    printf("Farewell! thou art too dear for my possessing, \n");
    printf("%C%d\n", '$', 2 * cost);
    printf("Only %d%% of Sally's gribbles were edible.\n", 2 * 6);
    return EXIT_SUCCESS;
}

