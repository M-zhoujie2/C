//
// Created by zhoujie on 2017/12/25.
//

//程序清单11.24 -- starsrch.c 程序
//starsrch.c -- 使用strncmp()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LISTSIZE 6

int main (void) {
    const char *list[LISTSIZE] = {
            "astronomy", "astounding",
            "astrophysics", "ostracize",
            "asterism", "astrophobia"
    };
    int count = 0;
    int i;

    for (i = 0; i < LISTSIZE; i++)
        if (strncmp(list[i], "astro", 5) == 0) {
            printf("Found: %s\n", list[i]);
            count++;
        }
    printf("The list contained %d words beginning with astro.\n", count);
    return EXIT_SUCCESS;
}
