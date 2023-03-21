#include <iostream>

using namespace std;

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Swap(char *a, char *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 10;
    int b = 13;
    Swap(&a, &b);
    cout << "a:" << a << "; b:" << b << endl;

    char aa = 'a';
    char bb = 'b';
    Swap(&aa, &bb);
    cout << "aa:" << aa << "; bb:" << bb << endl;

    return 0;
}