#include <iostream>

using namespace std;

inline int SQ(int x) { return x * x; }

int main()
{
    int re = SQ(10);
    cout << "re:" << re << endl;
    return 0;
}