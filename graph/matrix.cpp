#include <iostream>
using namespace std;

const int N=1000;
int graph[N][N];
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int u, v;
    for(int i=0; i<m; i++)
    {
        scanf("%d %d", &u, &v);
        graph[u][v]=1;
    }
    return 0;
}