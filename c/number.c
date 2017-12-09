//
// Created by zhoujie on 2017/7/2.
//
#include <stdio.h>
int main(void)
{
    int i = 2147483647;
    long int j = 2147483647;
    unsigned int k = 4294967295;

    printf("%d %d %d\n", i, i+1, i+2);
    printf("%ld %ld %ld\n", j, j+1, j+2);
    printf("%u %u %u\n", k, k+1, k+2);

    return 0;
}
