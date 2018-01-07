//
// Created by zhoujie on 2017/12/27.
//

//程序清单14.13 funds4.c 程序
//funds4.c -- 把结构数组传递给函数
#include <stdio.h>
#include <stdlib.h>
#define FUNDLEN 50
#define N 2

struct funds {
    char bank[FUNDLEN];
    double bankfund;
    char save[FUNDLEN];
    double savefund;
};

double sum (count struct funds money[], int n);

int main (void) {
    struct funds jones[N] = {
            {
                    "Garlic-Melon Bank",
                    4032.27,
                    "Lucky's Savings and Loan",
                    8543.94
            }, {
                    "Honest Jack's Bank",
                    3620.88,
                    "Party Time Savings",
                    3802.91
            }
    };
    printf("The Joneses have a total of $%.2f.\n", sum(jones, N));
    return EXIT_SUCCESS;
}

double sum (const struct funds money[], int n) {
    double total;
    int i;
    for (i = 0, total = 0; i < n, i++)
        total += monry[i].bankfund + money[i].savefund;
    return(total);
}
