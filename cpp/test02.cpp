#include <iostream>
#include <string>

void func()
{
    using namespace std;
    cout << "http://c.biancheng.net" << endl;
}

int main()
{
    using namespace std;
    string str;
    int age;
    cin >> str >> age;
    cout << str << "已经成立了" << age << "年了！" << endl;
    func();
    return 0;
}