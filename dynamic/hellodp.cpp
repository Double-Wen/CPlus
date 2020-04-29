/*
 * Filename: /home/ubuntu/Code/CPlus/dynamic/hellodp.cpp
 * Path: /home/ubuntu/Code/CPlus/dynamic
 * Created Date: Wednesday, April 29th 2020, 7:43:35 pm
 * Author: liuwenwen
 * 
 * 数塔问题 晴神算法笔记P426
 * 
 * Copyright (c) 2020 yuhai.tech
 */

#include <iostream>
#include <algorithm>
using namespace std;

const int maxn=1000;
int f[maxn][maxn], dp[maxn][maxn];

int main()
{
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            scanf("%d", &f[i][j]);
        }
    }
    for(int j=1; j<=n; j++)
    {
        dp[n][j]=f[n][j];
    }
    for(int i=n-1; i>=1; i--)
    {
        for(int j=1; j<=i; j++)
        {
            dp[i][j] = max(dp[i+1][j], dp[i+1][j+1]) + f[i][j];
            // cout << "max" << max(dp[i+1][j], dp[i+1][j+1]);
            // cout << "->" << dp[i][j];
        }
    }
    printf("%d\n", dp[1][1]);
    return 0;
}