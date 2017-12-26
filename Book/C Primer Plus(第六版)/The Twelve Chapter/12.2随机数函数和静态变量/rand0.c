//
// Created by zhoujie on 2017/12/26.
//

//程序清单12.7 rand0.c 函数文件
//使用ANSI C可移植算法
static unsigned long int next = 1; //种子

unsigned int rand0 (void) {
    //生成伪随机数的魔术公式
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65535) % 32768;
}