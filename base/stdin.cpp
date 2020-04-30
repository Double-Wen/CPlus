#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char a[100];
    for(int i=0; i<3; i++)
    {
        cin.getline(a, 100);
        cout<<a<<endl;
    }
    string b;
    for(int i=0; i<3; i++)
    {
        getline(cin, b, '\n');
        cout << b << endl;
    }
    return 0;
}
