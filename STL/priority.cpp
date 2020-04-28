#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> q;
    q.push(5);
    q.push(1);
    q.push(3);
    q.push(6);
    for(int i=0; i<4; i++)
    {
        cout << q.top() << endl;    
        //注意优先队列和传统队列不同，
        //它是用堆而不是线性结构来维护的，
        //所以它只有top来取堆顶元素
        //而不是传统的线性结构的front和back
        q.pop();
    }
    return 0;
}