#include <iostream>

int main()
{
    int *p = new int();//分配1个int型的内存空间
    delete p;// 释放内存

    int *p2 = new int[10];//分配10个int型的内存空间
    delete[] p2;
    return 0;
}