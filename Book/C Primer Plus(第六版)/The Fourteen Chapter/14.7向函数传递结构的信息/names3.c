//
// Created by zhoujie on 2017/12/27.
//

//程序清单14.10 names3.c 程序
//names3.c -- 使用指针和malloc()
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SLEN 81
struct namect {
    char *fname;
    char *lname;
    int letters;
};

void getinfo(struct namect*);
void makeinfo(struct namect*);
void showinfo(const struct namect*);
void cleanup(struct namect*);
char *s_gets(char *st, int n);

int main(void) {
    struct namect person;
    getinfo(&person);
    makeinfo(&person);
    showinfo(&person);
    cleanup(&person);
    return EXIT_SUCCESS;
}

void getinfo (struct namect *pst) {
    char temp[SLEN];
    printf("Please enter your first name.\n");
    s_gets(temp, SLEN);
    //分配内存以储存名
    pst->fname = (char*) malloc(strlen(temp) + 1);
    //把名拷贝到动态分配的内存中
    strcpy(pst->fname, temp);
    printf("Please enter your last name.\n");
    s_gets(temp, SLEN);
    pst->lname = (char *) malloc(strlen(temp) + 1);
    strcpy(pst->lname, temp);
}

void makeinfo (struct namect *pst) {
    pst->letters = strlen(pst->fname) + strlen(pst->lname);
}

void showinfo (struct namect *pst) {
    printf("%s %s, your name contains %d letters.\n", pst->fname, pst->lname, pst->letters);
}

void cleanup (struct namect *pst) {
    free(pst->fname);
    free(pst->lname);
}

char *s_gets (char *st, int n) {
    char *ret_val;
    char *find;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(st, '\n'); //查找换行符
        if (find)                //如果地址不是NULL
            *find = '\0';        //在此处放置一个空字符
        else
            while (getchar() != '\n')
                continue; //处理输入行的剩余部分
    }
    return ret_val;
}
