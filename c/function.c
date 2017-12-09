//
// Created by zhoujie on 2017/10/5.
//
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

//声明函数
//void printHelloWorld() {
//    printf("Hello World");
//}
//void hello(char * name, int age) {
//    printf("Hello %s, your age is %d\n", name, age);
//}
//int add(int a, int b) {
//    return a + b;
//}
//int main(void) {
////    printHelloWorld();
////    hello("zhangsan", 12);
//    int c = add(2, 3);
//    printf("The age is %d\n", c);
//    return EXIT_SUCCESS;
//}

//main函数参数及返回值
//int main(int argc, char ** argv) {
//    printf("Arguments count %d\n", argc);
//    printf("First argument value is %s\n", argv[0]);
//    for (int i = 0; i < argc; ++i) {
//        printf("Arg index: %d, arg value: %s\n", i, argv[i]);
//    }
//    return EXIT_SUCCESS;
//}

//可变参数
//int sum(int n, ...) {
//    int all = 0;
//    va_list args;
//    va_start(args, n);
//    for (int i = 0; i < n; ++i) {
//        all += va_arg(args, int);
//    }
//    va_end(args);
//    return all;
//}
//int main(void) {
//    printf("sum is %d\n", sum(4,1,2,3,4));
//    return EXIT_SUCCESS;
//}

//预设常量
//#define THE_NUM 2
//int main(void) {
//    printf("The num is %d\n", THE_NUM);
//    return EXIT_SUCCESS;
//}

//宏函数
//#define MAX(A, B) A > B ? A : B
//#define LOOP(FROM, TO, CONTENT) \
//    for (int i = FROM; i < TO; i++) {\
//        CONTENT \
//    }
//int main(void) {
//    printf("Max num is %d\n", MAX(2, 5));
//    LOOP(2, 100, printf("Current Index is %d\n", i);)
//    return EXIT_SUCCESS;
//}

//宏函数可变参数
#define LOG(LEVEL, FORMAT, ...) printf(LEVEL); printf(FORMAT, __VA_ARGS__);
#define LOG_E(FORMAT, ...) LOG("ERROR:", FORMAT, __VA_ARGS__);
#define LOG_W(FORMAT, ...) LOG("WARN:", FORMAT, __VA_ARGS__);
#define LOG_I(FORMAT, ...) LOG("INFO:", FORMAT, __VA_ARGS__);
#define LOG_D(FORMAT, ...) LOG("DEBUG:", FORMAT, __VA_ARGS__);
int main(void) {
    LOG_E("Hello %s %d\n", "World", 100);
    LOG_W("Hello %s %d\n", "World", 100);
    LOG_I("Hello %s %d\n", "World", 100);
    LOG_D("Hello %s %d\n", "World", 100);
}