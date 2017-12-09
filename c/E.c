//
// Created by zhoujie on 17/4/3.
//
#include <stdio.h>
#include <time.h>
#include <math.h>

clock_t start, stop;
double duration;
#define MAXN 10 /*多项式最大项数，即多项式阶数+1*/
#define CLK_TCK 18.2

double f1(int n, double a[], double x) {
    int i;
    double p = a[0];
    for (i=1; i<=n; i++)
        p += (a[i] * pow(x, i));
    return p;
};

double f2(int n, double a[], double x) {
    int i;
    double p = a[n];
    for (i=n; i>0; i--)
        p = a[i-1] + x*p;
    return p;
};

int main() {
    int i;
    double a[MAXN]; /*存储多项式的系数*/
    for (i = 0; i < MAXN; i++) a[i] = (double)i;

    start = clock();
    f1(MAXN - 1, a, 1.1);
    stop = clock();
    duration = ((double)(stop-start))/CLK_TCK;
    printf("ticks1 = %f\n", (double)(stop-start));
    printf("duration1 = %6.2e\n", duration);

    start = clock();
    f2(MAXN - 1, a, 1.1);
    stop = clock();
    duration = ((double)(stop-start))/CLK_TCK;
    printf("ticks2 = %f\n", (double)(stop-start));
    printf("duration2 = %6.2e\n", duration);

    return 0;
}

int MaxSubswqSum1(int A[], int N) {
    int ThisSum, MaxSum = 0;
    int i, j, k;
    for (i = 0; i < N; i++) {
        /*是子列左端位置*/
        for (j = i; j < N; j++) {
            ThisSum = 0; /*ThisSum是从A[i]到A[j]的子列和*/
            for (k = i; k <= j; k++)
                ThisSum += A[k];
            if (ThisSum > MaxSum) /*如果刚得到的这个子列和更大*/
                MaxSum = ThisSum; /*则更新结果*/
            /*j是子列右端位置*/
        }/*j循环阶数*/
    }/*i循环结束*/
    return MaxSum;
}

int MaxSubswqSum2(int A[], int N) {
    int ThisSum, MaxSum = 0;
    int i, j;
    for (i = 0; i < N; i++) {
        ThisSum = 0;
        /*i是子列左端位置*/
        for (j = i; j < N; j++) {
            /*j是子列右端的位置*/
            ThisSum += A[j]; /*ThisSum是从A[i]到A[j]的子列和*/
            if (ThisSum > MaxSum) /*如果刚得到的这个子列和更大*/
                MaxSum = ThisSum; /*则更新结果*/
        }/*j循环阶数*/
    }/*i循环结束*/
    return MaxSum;
}

int MaxSubswqSum3(int A[], int N) {
    int ThisSum, MaxSum = 0;
    int i;
    ThisSum = MaxSum = 0;
    for (i = 0; i < N; i++) {
        ThisSum += A[i];
        if (ThisSum > MaxSum)
            MaxSum = ThisSum;
        else if (ThisSum < 0)
            ThisSum = 0;
    }
    return MaxSum;
}
