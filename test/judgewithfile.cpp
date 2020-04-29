#include <iostream>
using namespace std;

int main()
{
    freopen("test.in", "r", stdin);
    freopen("test.out", "w", stdout);
    char buffer[100][100];
    for(int i=0; i<10; i++)
    {
        scanf("%[^\n]%*c", buffer[i]);
    }
    for(int i=0; i<10; i++)
    {
        printf("%s\n", buffer[i]);
    }
    return 0;
}