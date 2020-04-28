#include <iostream>
#include <stack>

using namespace std;
int main()
{
    stack<int> st;
    for(int i=1; i<=5; i++)
    {
        st.push(i);
    }
    for(int i=1; i<=5; i++)
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}