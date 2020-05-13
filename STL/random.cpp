#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int foo[10];
    fill(foo, foo+10, rand());
    for(int i=0; i<10; i++)
    {
        cout << foo[i] << endl;
    }
    for(int i=0; i<10; i++)
    {
        cout << rand() << endl;
    }
    return 0;
}
