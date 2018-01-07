//
// Created by zhoujie on 2017/12/31.
//

//程序清单15.1 binbit.c 程序
//binbit.c -- 使用位操作显示二进制
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> //提供CHAR_BIT表示每字节的位数
char *itobs(int, char*);
void show_bstr(const char*);

int main (void) {
    char bin_str[CHAR_BIT * sizeof(int) + 1];
    int number;

    puts("Enter integers and see them in binary.");
    puts("Non-numeric input terminates program.");
    while (scanf("%d", &number) == 1) {
        itobs(number, bin_str);
        printf("%d is ", number);
        show_bstr(bin_str);
        putchar('\n');
    }
    puts("Bye!");
    return EXIT_SUCCESS;
}

char *itobs(int n, char *ps) {
    int i;
    const static int size = CHAR_BIT * sizeof(int);
    for (i = size - 1; i >= 0; i--, n >>= 1)
        ps[i] = (01 & n) + '0';
    ps[size] = '\0';
    return ps;
}

//4位一组显示二进制字符串
void show_bit(const char *str) {
    int i = 0;
    while (str[i]) {
        putchar(str[i]);
        if (++i % 4 == 0 && str[i])
            putchar(' ');
    }
}