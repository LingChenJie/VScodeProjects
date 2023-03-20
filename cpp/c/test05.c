#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = (int*)malloc(sizeof(int) * 10);// 分配10个int型的内存空间
    free(p);// 释放内存
    return 0;
}