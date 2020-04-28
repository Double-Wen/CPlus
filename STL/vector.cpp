#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> name;
    vector<int> vi;
    for(int i=1; i<=5; i++)
    {
        vi.push_back(i);
    }
    vector<int>::iterator it=vi.begin();
    for(it; it!=vi.end(); it++)
    {
        cout << *it << endl;
    }
    cout << vi.size() << endl;
    return 0;
}