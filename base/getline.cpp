#include <cstdio>
#include <iostream>
//#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    char *buffer=nullptr;
    string cache;
    size_t length=0;
    for(int i=0; i<3; i++)
    {
        getline(&buffer, &length, stdin);
        printf("%s", buffer);
        //printf("%d\n", length);
        free(buffer);
    }
    return 0;
}