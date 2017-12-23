//
// Created by zhoujie on 2017/12/23.
//

//程序清单10.11 sum_arr2.C 程序
//sum_arr2.C -- 数组元素之和
#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int sump(int *start, int *end);
int main (void) {
    int marbles[SIZE] = { 20, 10, 5, 39, 4, 16, 19, 26, 31, 20 };
    long answer;

    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    return EXIT_SUCCESS;
}

//使用指针算法
int sump (int *start, int *end) {
    int total = 0;

    while (start < end) {
        total += *start; //把数组元素的值加起来
        start++;         //让指针指向下一个元素
    }
    return total;
}