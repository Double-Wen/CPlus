#include <iostream>
using namespace std;
int fib(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}
int newfib(int n)
{
    static int fib[100];
    fib[0]=1;
    fib[1]=1;
    for(int i=2;i<=n;i++)
    {
        fib[i]=fib[i-1]+fib[i-2];
    }
    return fib[n];
}
int main(int argc, char *argv[])
{
    for(int i=0;i<100;i++)
    {
        cout << newfib(i) << endl;
    }
    return 0;
}