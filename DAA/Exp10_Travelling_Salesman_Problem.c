/* AIM: Solve the Travelling Salesman Problem (TSP) using recursion and backtracking to find the minimum travelling cost (C implementation). */

#include <stdio.h>

#define MAX 10

int n, cost[MAX][MAX];
int visited[MAX];
int minCost = 999999;

void tsp(int city, int count, int currentCost)
{
    if (count == n)
    {
        if (cost[city][0] != 0)
        {
            int totalCost = currentCost + cost[city][0];

            if (totalCost < minCost)
                minCost = totalCost;
        }
        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && cost[city][i] != 0)
        {
            visited[i] = 1;

            tsp(i, count + 1,
                currentCost + cost[city][i]);

            visited[i] = 0;
        }
    }
}

int main()
{
    printf("Enter number of cities: ");
    scanf("%d", &n);

    printf("Enter cost matrix:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            scanf("%d", &cost[i][j]);
    }

    for (int i = 0; i < n; i++)
        visited[i] = 0;

    visited[0] = 1;

    tsp(0, 1, 0);

    if (minCost == 999999)
        printf("No valid tour exists.\n");
    else
        printf("Minimum travelling cost = %d\n", minCost);

    return 0;
}