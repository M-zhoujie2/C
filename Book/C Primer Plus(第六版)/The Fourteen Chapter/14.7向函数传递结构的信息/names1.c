//
// Created by zhoujie on 2017/12/27.
//

//程序清单14.8 names1.c 程序
//names1.c -- 使用指向结构的指针
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NLEN 30

struct namect {
    char fname[NLEN];
    char lname[NLEN];
    int letters;
};

void getinfo(struct namect *);
void makeinfo(struct namect *);
void showinfo(const struct namect *);
char *s_gets(char *st, int n);

int main (void) {
    struct namect person;
    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    return EXIT_SUCCESS;
}

void getinfo (struct namect *pst) {
    printf("Please enter your first name.\n");
    s_gets(pst->fname, NLEN);
    printf("Please enter your last name.\n");
    s_gets(pst->lname, NLEN);
}

void makeinfo (struct namect *pst) {
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo (const struct namect *pst) {
    printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}

char *s_gets(char *st, int n) {
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n'); //查找换行符
        if (find) //如果地址不是NULL
            *find = '\0'; //在此处放置一个空字符
        else
            while (getchar() != '\n')
                continue; //处理输入行中剩余的字符
    }
    return ret_val;
}