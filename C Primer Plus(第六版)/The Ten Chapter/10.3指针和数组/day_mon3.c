//
// Created by zhoujie on 2017/12/23.
//

//程序清单10.9 day_mon3.C 程序
//day_mon3.C -- uses pointer notation
#include <stdio.h>
#include <stdlib.h>
#define MONTHS 12
int main (void) {
    int days[MONTHS] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("Month %2d has %d days.\n", index + 1, *(days + index)); //与days[index]相同
    return EXIT_SUCCESS;
}