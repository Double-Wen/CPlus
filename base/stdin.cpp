#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
    char a[10];
    for(int i=0; i<3; i++)
    {
        cin.getline(a, 10);
        cin.clear();    //修复cin的错误，但是缓冲区依然有残留
        cout<<a<<endl;
    }
    //cin.getline()遇到'\n'会将'\n'从缓冲区中取出。
    //如果缓冲区中的字符串长度超过int。
    //那么字符串会残留在缓冲区中，
    //但是这时cin的状态会被设置为错误。
    //直接关闭输入。
    //所以如果不做出cin的错误处理，
    //在这个cin作用域以后调用cin时，
    //不会执行这条调用语句。
    //只会直接返回一个任意负值，表示错误。
    string b;
    for(int i=0; i<3; i++)
    {
        getline(cin, b, '\n');
        cout << b << endl;
    }
    cout << "end normally" << endl;
    return 0;
}
