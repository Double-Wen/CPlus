/*
 * Filename: /home/ubuntu/Code/CPlus/graph/hello.cpp
 * Path: /home/ubuntu/Code/CPlus/graph
 * Created Date: Thursday, April 30th 2020, 11:37:08 am
 * Author: liuwenwen
 * 
 * Copyright (c) 2020 yuhai.tech
 */

#include <iostream>
using namespace std;

const int MAXVEX=20;
typedef int VertexType;
typedef int EdgeType;

typedef struct EdgeNode
{
    int adjvex;
    EdgeType weight;
    EdgeNode *next;
} EdgeNode;

typedef struct VextexNode
{
    VertexType data;
    EdgeNode *firstedge;
} VextexNode, AdjList[MAXVEX];

typedef struct GraphAdjList
{
    AdjList adjList;
    int numNodes;
    int numEdges;
} GraphAdjList;

void CreateALGraph(GraphAdjList *Gp)
{
    int i,j,k;
    EdgeNode *pe;
    cout << "请输入顶点数：" << endl;
    cin >> Gp->numNodes;
    cout << "请输入边数：" << endl;
    cin >> Gp->numEdges;
    for(int i=0; i<Gp->numNodes; i++)
    {
        cout << "请输入顶点信息：" << endl;
        cin >> Gp->adjList[i].data;
        Gp->adjList[i].firstedge=nullptr;
    }
    for(int k=0; k<Gp->numEdges; k++)
    {
        cout << "Please intput the Node num of Edge:" << endl;
        cin >> i >> j;
        pe = (EdgeNode *)malloc(sizeof(EdgeNode));
        pe->adjvex=j;
        pe->next=Gp->adjList[i].firstedge;
        Gp->adjList[i].firstedge=pe;

        pe= (EdgeNode *)malloc(sizeof(EdgeNode));
        pe->adjvex=i;
        pe->next=Gp->adjList[j].firstedge;
        Gp->adjList[j].firstedge=pe;
    }
}

int main()
{
    GraphAdjList GL;
    CreateALGraph(&GL);
}