#include <iostream>
#include <random>
using namespace std;

int main()
{
    int foo[20];
    for(int i=0; i<20; i++)
    {
        foo[i] = rand();
    }
    int (&bar)[20]=foo;
    for(int i=0; i<20; i++)
    {
        cout << bar[i] << endl;
    }
    return 0;
}