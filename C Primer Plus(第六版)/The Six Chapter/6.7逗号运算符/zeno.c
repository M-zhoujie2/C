//
// Created by zhoujie on 2017/12/16.
//

//程序清单6.14 zeno.c 程序
//zeno.c -- 求序列的和
#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int t_ct; //项计数
    double time, power_of_2;
    int limit;

    printf("Enter the number of terms you want: ");
    scanf("%d", &limit);
    for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0) {
        time += 1.0 / power_of_2;
        printf("time = %f when terms = %d.\n", time, t_ct);
    }
    return EXIT_SUCCESS;
}
