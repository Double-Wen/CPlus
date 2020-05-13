#include <iostream>
using namespace std;

void func()
{
    cout << __func__ << endl;
}

int main()
{
    cout << __func__ << endl;
    cout << __LINE__ << endl;
    func();
    cout << "Hello World" << endl;
    cout << __func__ << endl;
    return 0;
}

