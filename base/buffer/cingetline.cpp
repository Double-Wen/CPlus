#include <iostream>
using namespace std;

int main()
{
    char test[1000];
    char cont[10];
    cin.getline(test, 10);
    cin.clear();    //将错误状态位恢复
    cin.getline(cont, 10);

    cout << test << endl;
    cout << cont << endl;
    char bubu[1000];
    cin.get(bubu, 1000, EOF);
    cout << bubu << endl;
    cout << EOF << endl;
    return 0;
}