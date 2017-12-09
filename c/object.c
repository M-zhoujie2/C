//
// Created by zhoujie on 2017/10/5.
//
#include <stdio.h>
#include <stdlib.h>

//假设：iPtr当前所存地址是0x00000100
//若iPtr指向一个微型元素(占四个字节)
//则iPtr++等于iPtr+1*4=0x00000104
//若iPtr指向一个实型元素(占四个字节)
//则iPtr++等于iPtr+1*4=0x00000104
//若iPtr指向一个字符元素(占一个字节)
//则iPtr++等于iPtr+1*1=0x00000101
int main(void) {
    char *str = "Hello";
    int a = 10;
    int *pa = &a;
    printf("%d\n", *pa);
}
