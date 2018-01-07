//
// Created by zhoujie on 2017/12/27.
//

//程序清单14.5 funds1.c 程序
//funds1.c -- 把结构成员作为参数传递
#include <stdio.h>
#include <stdlib.h>
#define FUNDLEN 50

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum(double, double);

int main (void) {
    struct funds stan = {
            "Garlic-Melon Bank",
            4032.27,
            "Lucky's Savings and Loan",
            8543.94
    };

    printf("Stan has a total of $%.2f.\n", sum(stan.bankfund, stan.savefund));
    return EXIT_SUCCESS;
}

//两个double类型的数相加
double sum(double x, double y) {
    return (x + y);
}
