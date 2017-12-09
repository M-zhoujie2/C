//
// Created by zhoujie on 2017/10/29.
//
#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
//    char a[] = "How are you?", b[20];
//    char *p1, *p2;
//    for (p1 = a, p2 = b; *p1 != '\0'; p1++, p2++)
//        *p2 = *p1;
//    *p2 = '\0';
//    cout << "string a is:" << a << endl;
//    cout << "string b is:" << b << endl;

//    int a = 5;
//    int *pa = &a;
//
//    int b[6] = {1,2,3,4,5,6};
//    int *pb = b;
//
//    char c[6] = {'h', 'e', 'l', 'l', 'e', '\0'};
//    char *pc = c;
//
//    int d[3] = {1, 2, 3};
//    int *pd = d;
//
//    cout << a << endl;
//    cout << pa << endl << endl;
//    cout << b << endl;
//    cout << pb << endl << endl;
//    cout << c << endl;
//    cout << pc << endl;
//    cout << d << endl;
//    cout << pd << endl;

    char buffer[4] = "ABC";
    char *pc;
    pc = "hello";
    cout << pc << endl;
    pc++;
    cout << pc << endl;
    cout << *pc << endl;
    pc = buffer;
    cout << pc;
    return EXIT_SUCCESS;
}