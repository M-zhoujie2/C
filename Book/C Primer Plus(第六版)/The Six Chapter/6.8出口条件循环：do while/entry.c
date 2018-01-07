//
// Created by zhoujie on 2017/12/16.
//

//程序清单6.16 entry.C 程序
//entry.C -- 出口条件循环
#include <stdio.h>
#include <stdlib.h>
int main (void) {
    const int secret_code = 13;
    int code_entered;

    printf("To enter the triskaidekaphobia therapy club\n");
    printf("please enter the secret code number: ");
    scanf("%d", &code_entered);
    while (code_entered != secret_code) {
        printf("To enter the triskaidekaphobia therapy club\n");
        printf("please enter the secret code number: ");
        scanf("%d", &code_entered);
    }
    printf("Congratulations! You are cured!\n");
    return EXIT_SUCCESS;
}
