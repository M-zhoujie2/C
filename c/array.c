//
// Created by zhoujie on 2017/10/3.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
//    一维数组
//    int len = 10;
//    int arr[len]; //arr[0]访问数组第一个元素
//    //clear array
//    for(int a = 0; a < len; a++) {
//        arr[a] = 0;
//    }
//    for(int i=0; i<len; i++) {
//        printf("index %d,and value is %d\n", i, arr[i]);
//    }

//    int arr[] = {1, 2, 5, 7, 3, 8};
//    for(int i = 0; i < 6; i++) {
//        printf("%d\n", arr[i]);
//    }

//    二维数组
//    int arr[3][4];
//    //clear arr
//    for(int i = 0; i < 3; i++) {
//        for(int j=0; j<4; j++) {
//            arr[i][j] = 0;
//        }
//    }
//    for(int i = 0; i < 3; i++) {
//        for(int j=0; j<4; j++) {
//            printf("%d\n", arr[i][j]);
//        }
//    }
//    int arr[3][4] = {
//            {1,2,3,4},
//            {5,6,7,8},
//            {9,10,11,12}
//    };
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 4; j++) {
//            printf("index(%d, %d), %d\n", i, j, arr[i][j]);
//        }
//    }

//    字符数组
//    char str[10] = {'H', 'e', 'l', 'l', 'o'};
//    memset(str, 0, 10);
//    printf("string length: %ld, and string is %s\n", strlen(str), str);
//    char str[] = "Hello World";
//    for(int i = 0; i < 11; i++) {
//        printf("[index:%d]%c\n", i, str[i]);
//    }

//    字符串连接
//    char * str = "Hello";
//    char * str1 = "World";
//    const uint32_t DIST_LEN = 100;
//    char dist[DIST_LEN];
//    memset(dist, 0, DIST_LEN);
//    strcat(dist, str);
//    strcat(dist, " ");
////    strcat(dist, str1);
//    strncat(dist, str1, 3);
//    puts(dist);
//    char * str = "Item";
//    int a = 100;
//    char dist[100];
//    float b = 3.14;
//    memset(dist, 0, 100);
//    sprintf(dist, "%s %d, MATH_PI=%.2f", str, a, b);
//    puts(dist);

//    格式化字符串
//    char * str = "Item 100";
//    char buf[10];
//    memset(buf, 0, 10);
//    int a;
//    sscanf(str, "%4s %d", buf, &a);
//    printf("String is %s, and int value is %d\n", buf, a);

//    字符串与基础数据结构类型转换
//    char * str = "100";
//    int a;
//    sscanf(str, "%d", &a);
//    printf("Int value is %d\n", a);
//    double value = atof("3.14");
//    printf("%f\n", value);
//    int value = 1000;
//    char buf[10];
//    sprintf(buf, "%d", value);
//    puts(buf);

// 字符串比较
//    char * str = "Hello";
//    char * str1 = "Hello";
//    char str2[] = "Hello";
//    printf("Pointer str %p, Pointer str1 %p\n", str, str1);
//    printf("Result is %d\n", str==str1);
//    int result = strcmp(str2, str1);
//    if (result == 0) {
//        puts("Two string is equal");
//    } else {
//        puts("Two string not equal");
//    }

//    字符串截取
//    char * str = "Hello World";
////    char * str1 = strchr(str, 'o');
////    char * str1 = strrchr(str, 'o');
////    char * str1 = strstr(str, "Wo");
//    char * tmp = str + 6;
//    char str1[10];
//    memset(str1, 0, 10);
//    strncpy(str1, tmp, 3);
//    puts(str1);

//    数组名代表数组首元素的地址
//    数组名相当于指向数组第一个元素的指针
//    对于数组a[10]={1,2,3,4,5,6,7,8,9,0};
//    数组名a相当于指向第一个元素a[0]的指针;
//    注意:
//    数组名a不是变量，不能给a赋值
//    int a[5] = {1, 2, 3, 4, 5};
//    printf("%p\n", a);
//    printf("%d\n", *a);
//    printf("%p\n", &a[0]);
//    printf("%d\n", a[0]);

//    int a[5] = {10,11,12,13,14};
//    int * p = NULL;
//    printf("%p\n", a);
//    p = a;
//    printf("%p\n", p);
//    printf("%d\n", *p);
//    printf("%d\n", *p++);
//    printf("%d\n", *p++);
//    若定义数组int a[10]; 指针int *pointer;
//    则:
//    pointer = a; 等价于pointer = &a[0];
//    数组访问
//    pointer + i; 等价于a + i; 等价于&a[i];
//    *(pointer + i)等价于*(a + i)等价于a[i];
//    表示形式
//    pointer[i]等价于*(pointer + i)

//    int * p = &a[0];
//    a++是没有意义的，但p++会引起p变化
//    p可以指向数组最后一个元素以后的元素
//    指针做加减运算时一定注意有效的范围
//    int a[5];
//    int * iPtr = &a[1];
//    iPtr--;
//    *iPtr = 3;
//    iPtr--;
//    *iPtr = 6;
//    int a[5] = {1, 2, 3, 4, 5};
//    int *p = &a[3];
//    *p = 100;
//    printf("%d\n", *p++);
//    printf("%d\n", *p--);
//    printf("%d\n", *--p);

    int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
    int (*p)[4], i, j;
    p = a;
    scanf("%d", &i);
    scanf("%d", &j);
    printf("%d\n", *(*(p+i)+j));
    printf("%p\n", a);
    return EXIT_SUCCESS;
}