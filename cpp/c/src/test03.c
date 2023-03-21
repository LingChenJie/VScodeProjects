#include <stdio.h>

int n = 10;
extern void func();

int main()
{
    func();
    printf("main: %d\n", n);
    return 0;
}