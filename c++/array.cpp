//
// Created by zhoujie on 2017/10/8.
//
#include <iostream>
#include <iomanip>
using namespace std;
using std::cin;
using std::cout;
using std::setw;

int main () {
//    int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
//    int (*p)[4], i, j;
//    p = a;
//    cin>>i>>j;
//    cout<<setw(4)<<p[i][j];

//    int a[4] = {1,3,5,7};
//    cout << a << endl;
//    cout << a + 1 << endl;
//    cout << &a << endl;
//    cout << &a + 1 << endl;
//    cout << *(&a) << endl;
//    cout << *(&a) + 1 << endl;
    //若a是指向数组第一个元素的指针，即a相当于&a[0];
    //&a是"指向数组"的指针，即&a+1将跨越16个字节;
    //&a相当于管辖范围"上升"了一级
    //*a是数组的第一个元素a[0];即*a等价于a[0];
    //*a相当于管辖范围"下降"了一级;
    //三条规律
    //1.数组名相当于指向数组第一个元素的指针
    //2.&E相当于把E的管辖范围上升一个级别
    //3.*E相当于把E的管辖范围下降一个级别

    int a[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
    cout << " a= " << a << endl;
    cout << " &a[0]= " << &a[0] << endl << endl;

    cout << " &a= " << &a << endl;
    cout << " &a+1= " << &a + 1 << endl;

    cout << " a+1= " << a + 1 << endl;
    cout << " &a[0]+1= " << &a[0]+1 << endl << endl;

    cout << " a[1]= " << a[1] << endl;
    cout << " &a[1]= " << &a[1] << endl;
    cout << " *(a+1)= " << *(a + 1) << endl << endl;

    cout << " *a= " << *a << endl;
    cout << " a[0]= " << a[0] << endl;
    cout << " &a[0][0]= " << &a[0][0] << endl << endl;

    cout << " *a+1= " << *a + 1 << endl;
    cout << " a[0]+1= " << a[0] + 1 << endl;
    cout << " &a[0][0]+1= " << &a[0][0] + 1 << endl << endl;
    return EXIT_SUCCESS;
}
