#include <iostream>

using namespace std;

//声明内联函数
inline void swap(int *a, int *b);//也可以添加inline，但编译器会忽略

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "a:" << a << "; b:" << b << endl;
    swap(&a, &b);
    cout << "a:" << a << "; b:" << b << endl;
    return 0;
}

//定义内联函数
inline void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}