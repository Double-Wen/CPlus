#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char a[10];
    for(int i=0; i<3; i++)
    {
        cin.getline(a, 10);
        cout<<a<<endl;
    }
    string b;
    for(int i=0; i<3; i++)
    {
        getline(cin, b, '\n');
        cout << b << endl;
    }
    cout << "end normally" << endl;
    return 0;
}
