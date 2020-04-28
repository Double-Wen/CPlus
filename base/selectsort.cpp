#include <iostream>
using namespace std;

void print(int (&foo)[20])
{
    for(int i=0; i<20; i++)
    {
        cout << foo[i] << endl;
    }
}
void selectSort(int li[], int n)
{
    for(int i=0; i<n; i++)
    {
        int k=i;
        for(int j=i; j<n; j++)
        {
            if(li[j]<li[k])
            {
                k=j;
            }
        }
        int swap=li[i];
        li[i]=li[k];
        li[k]=swap;
    }
}
int main()
{
    int foo[20];
    for(int i=0; i<20; i++)
    {
        foo[i] = rand();
    }
    print(foo);
    cout << "\n\n\n" << endl;
    selectSort(foo, 20);
    print(foo);
    return 0;
}