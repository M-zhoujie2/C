//
// Created by zhoujie on 2017/12/18.
//

//程序清单9.3 lesser.c 程序
//lesser.c -- 找出两个整数中较小的一个
#include <stdio.h>
#include <stdlib.h>
int main(int, int);

int main (void) {
    int evil1, evil2;
    printf("Enter a pair of integers (q to quit):\n");
    while (scanf("%d %d", &evil1, &evil2) == 2) {
        printf("The lesser of %d and %d is %d.\n", evil1, evil2, imin(evil1, evil2));
        printf("Enter a pair of integers (q to quit):\n");
    }
    printf("Bye.\n");
    return EXIT_SUCCESS;
}

int imin (int n, int m) {
    int min;

    if (n < m)
        min = n;
    else
        min = m;
    return min;
}
