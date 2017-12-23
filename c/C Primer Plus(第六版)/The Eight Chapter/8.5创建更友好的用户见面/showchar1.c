//
// Created by zhoujie on 2017/12/17.
//

//程序清单8.5 showchar1.c 程序
//showchar.c -- 有较大I/O问题的程序
#include <stdio.h>
#include <stdlib.h>
void display(char cr, int lines, int width);
int main (void) {
    int ch; //待打印字符
    int rows, cols; //行数和列数
    printf("Enter a character and two integers:\n");
    while ((ch = getchar()) != '\n') {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        printf("Enter another character and two integers;\n");
        printf("Enter a newline to quit.\n");
    }
    printf("Bye.\n");
    return EXIT_SUCCESS;
}

void display(char ch, int lines, int width) {
    int row, col;
    for (row = 1; row <= lines; row++) {
        for (col = 1; col <= width; col++)
            putchar(cr);
        putchar('\n');//结束一行并开始新的一行
    }
}
