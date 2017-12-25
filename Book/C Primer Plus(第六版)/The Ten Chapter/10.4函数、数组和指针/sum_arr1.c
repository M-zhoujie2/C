//
// Created by zhoujie on 2017/12/23.
//

//程序清单10.10 sum_arr1.C 程序
//如果编译器不支持 %zd, 用%u 或 %lu替换它
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int sum(int ar[], int n);
int main (void) {
    int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
    long answer;

    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof marbles);
    return EXIT_SUCCESS;
}

int sum(int ar[], int n) {
    int i;
    int total = 0;

    for (i = 0; i < n; ++i)
        total += ar[i];
    printf("The size of ar is %zd bytes.\n", sizeof ar);
    return total;
}
