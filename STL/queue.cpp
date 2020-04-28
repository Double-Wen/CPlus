#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> foo;
    for(int i=1; i<=5; i++)
    {
        foo.push(i);
    }
    for(int i=1; i<=5; i++)
    {
        cout << foo.front() << endl;
        foo.pop();
    }
    return 0;
}