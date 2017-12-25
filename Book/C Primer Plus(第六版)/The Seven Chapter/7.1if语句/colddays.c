//
// Created by zhoujie on 2017/12/16.
//

//程序清单7.1 colddays.C 程序
//colddays.c -- 找出0°C以下的天数占总天数的百分比
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    const int FREEZING = 0;
    float temperature = 0;
    int cold_days = 0;
    int all_days = 0;

    printf("Enter the list of daily low temperatures.\n");
    printf("Use Celsius, and enter q to quit.\n");
    while (scanf("%f", &temperature) == 1) {
        all_days++;
        if (temperature < FREEZING)
            cold_days++;
    }
    if (all_days != 0)
        printf("%d days total: %.lf%% were below freezing.\n", all_days, 100.0 * (float) cold_days / all_days);
    if (all_days == 0)
        printf("No data entered!\n");
    return EXIT_SUCCESS;
}