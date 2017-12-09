//
// Created by zhoujie on 2017/10/3.
//
#include <stdio.h>
#include <stdlib.h>

int main(void) {
//    char str[] = "Hello World";
//    puts(str);
//    char ch = 'A';
//    putchar(ch);

//    printf("Number:%d, Unsigned Int:%u\n", -12, 20);
//    //0,1,2,3,4,5,6,7,10 八进制
//    //0,1,2,3,4,5,6,7,8,9,10 十进制
//    //0,1,2,3,4,5,6,7,8,9,10,A,B,C,D,E,F,10 十六进制
//    printf("%o\n", 8);
//    printf("%x, %X, red:%x\n", 15, 15, 0xFFFF00);
//    printf("%c\n", 'A');
//    printf("%s\n", "Hello World");
//    printf("%.2f\n", 3.14);
//    printf("%03d\n", 7);

//    puts("Please input a char");
//    char inputChar = getchar();
//    printf("User input is %c\n", inputChar);

//    char dist;
//    printf("Please input a char \n");
//    scanf("%c", &dist);
//    printf("User input is %c\n", dist);

    char buf[100];
    printf("Please input a string\n");
    scanf("%s", buf);
    printf("User input string is: %s\n", buf);
    return EXIT_SUCCESS;
}