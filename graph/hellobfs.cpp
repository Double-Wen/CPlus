#include <iostream>
#include <queue>
using namespace std;

const int MAXVEX=100;
bool visited[MAXVEX];

typedef struct AMGraph
{
    char vexs[MAXVEX];
    int arcs[MAXVEX][MAXVEX];
    int vexnum, arcnum;
} AMGraph;

int LocateVex(AMGraph &G, char v)
{
    int i;
    for(int i=0; i<G.vexnum; i++)
    {
        if(G.vexs[i]==v)
        {
            return i;
        }
    }
}

int CreateUDG(AMGraph &G)
{
    int i, j, k;
    char v1, v2;
    scanf("%d %d", &G.vexnum, &G.)
}