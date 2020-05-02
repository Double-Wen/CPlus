#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> foo;
    foo.push(1);
    foo.push(2);
    foo.push(3);
    cout << foo.front() << endl;
    foo.pop();
    cout << foo.front() << endl;
    return 0;
}