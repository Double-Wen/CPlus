#include <iostream>
using namespace std;

int main()
{
    int foo[5];
    fill(foo, foo+5, 3);
    for(int i=0; i<5; i++)
    {
        cout << foo[i] << endl;
    }
    return 0;
}