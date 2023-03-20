#include <iostream>

using namespace std;

int main()
{
    bool flag = true;
    if (flag)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    flag = false;
    if (flag)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    
    return 0;
}