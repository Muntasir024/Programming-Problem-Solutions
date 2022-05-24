#include<bits/stdc++.h>
using namespace std;

int weight[1002],cost[1002],number_of_items,capacity;
int dp[1002][52];

int knapsack(int i,int w)
{
    if(i>=number_of_items)
        return 0;
    if(dp[i][w]!=-1)
        return dp[i][w];
    int profit1=0,profit2=0;
    if(w+weight[i]<=capacity)
        profit1=cost[i]+knapsack(i+1,w+weight[i]);
    profit2=knapsack(i+1,w);
    dp[i][w]=max(profit1,profit2);
    return dp[i][w];
}

int main()
{
    int testcase,number_of_person,sum;
    scanf("%d", &testcase);
    while(testcase--)
    {
        sum=0;
        scanf("%d", &number_of_items);
        for(int i=0; i<number_of_items; i++)
        {
            scanf("%d %d", &cost[i], &weight[i]);
        }
        scanf("%d", &number_of_person);
        for(int i=0; i<number_of_person; i++)
        {
            scanf("%d", &capacity);
            memset(dp,-1,sizeof(dp));
            sum+=knapsack(0,0);
        }
        printf("%d\n", sum);
    }
    return 0;
}
