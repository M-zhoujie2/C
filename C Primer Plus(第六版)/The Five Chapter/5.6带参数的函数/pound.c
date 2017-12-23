//
// Created by zhoujie on 2017/12/14.
//

//程序清单5.15 pound.C 程序
//pound,C -- 定义一个带一定参数的函数
#include <stdio.h>
#include <stdlib.h>
void pound(int n); //ANSI函数原型声明
int main(void) {
    int times = 5;
    char ch = '!'; //ANSI码是33
    float f = 6.0f;

    pound(times); //int类型的参数
    pound(ch); //和pound((int)ch); 相同
    pound(f); //和pound((int)f); 相同
    return EXIT_SUCCESS;
}

void pound(int n) { //ANSI风格函数头
    while (n-- > 0)
        printf("#");
    printf("\n");
}
