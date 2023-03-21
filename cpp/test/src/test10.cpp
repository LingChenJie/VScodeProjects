#include <iostream>
using namespace std;
#define SQ(x) ((x) * (x))

int main()
{
    int ret = 200 / SQ(9 + 1);
    cout << "ret:" << ret << endl;
    return 0;
}
