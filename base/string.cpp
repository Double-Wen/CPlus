#include <iostream>
#include <string>

using namespace std;

int main()
{
    string email="123@456";
    string s;
    getline(cin, s);
    for(int i=0; i<s.length(); i++)
    {
        cout << s[i] << endl;
    }
    cout << s << endl;
    for(int i=0; i<5; i++)
    {
        getline(cin, s);
        cout << s << endl;
    }
    return 0;
}