//
// Created by zhoujie on 2017/11/16.
//
#include <iostream>
using namespace std;
//void Rank(int *q1, int *q2) {
//    int temp;
//    if (*q1 < *q2) {
//        temp = *q1;
//        *q1 = *q2;
//        *q2 = temp;
//    }
//}
//int main() {
//    int a, b, *p1, *p2;
//    cin >> a >> b;
//    p1 = &a; p2 = &b;
//    Rank(p1, p2);
//    cout << a << " " << b << endl;
//    return 0;
//}
//
//void sum(int *p, int n) {
//    int total = 0;
//    for (int i = 0; i < n; i++) {
//        total += *p++;
//    }
//    cout << total << endl;
//}
//
//int main() {
//    int a[10] = {1,2,3,4,5,6,7,8,9,10};
//    sum(a, 10);
//    return 0;
////}
//
//int maxvalue(int(*p)[4]) {
//    int max = p[0][0];
//    for (int i = 0; i < 3; i++) {
//        for (int j = 0; j < 4; j++) {
//            if (p[i][j] > max)
//                max = p[i][j];
//            return max;
//        }
//    }
//}
//
//int main() {
//    int a[3][4] = {{1,3,5,7}, {9,11,13,15}, {2,4,6,8}};
//    cout << "The Max value is" << maxvalue(a);
//    return 0;
//}

//int sum(int array[], int n) {
//    for (int i = 0; i < 10 - 1; i++) {
//        *(array + 1) = *(array) + *(array + 1);
//        array++;
//    }
//    return *array;
//}
//
//int main()
//{
//    int *p;
//    int a[10] = {1,2,3,4,5,6,7,8,9,10};
//    cout << p << endl;
//    cout << sum(a, 10);
//    return 0;
//}

int value1 = 20;
int value2 = 30;
int *getInt1() {
//    int value1 = 20;
    return &value1;
}

    int *getInt2() {
//    int value2 = 30;
        return &value2;
    }
//
int main() {
    int *p, *q;
    p = getInt1();
    q = getInt2();
    cout << *p << endl;
    return EXIT_SUCCESS;
}