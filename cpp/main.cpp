#include <iostream>
using namespace std;

int main()
{
    auto top = "~";
    for (int i = 0; i < 10; ++i)
    {
        i != 9 ? cout << top : cout << top << endl;
    }

    std::cout << "~~~~~~~~~~" << std::endl;
    std::cout << "| ~    ~ |" << std::endl;
    std::cout << "|  .   . |" << std::endl;
    std::cout << "|    -}  |" << std::endl;
    std::cout << "----------" << std::endl;

    return 0;
}