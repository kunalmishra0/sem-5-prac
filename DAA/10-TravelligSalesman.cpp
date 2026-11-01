#include <iostream>
#include <climits>
using namespace std;

int n;
int cost[10][10];
bool visited[10];
int minCost = INT_MAX;

void tsp(int city, int count, int totalCost, int start)
{
    if (count == n && cost[city][start] != 0)
    {
        int finalCost = totalCost + cost[city][start];

        if (finalCost < minCost)
        {
            minCost = finalCost;
        }

        return;
    }

    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && cost[city][i] != 0)
        {
            visited[i] = true;

            tsp(i, count + 1,
                totalCost + cost[city][i], start);

            visited[i] = false;
        }
    }
}

int main()
{
    cout << "[REDACTED] [REDACTED]" << endl;

    cout << "Enter the number of cities: ";
    cin >> n;

    if (n < 2 || n > 10)
    {
        cout << "Number of cities must be between 2 and 10.\n";
        return 0;
    }

    cout << "Enter the cost matrix:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> cost[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    visited[0] = true;

    tsp(0, 1, 0, 0);

    if (minCost == INT_MAX)
    {
        cout << "No valid tour exists.\n";
    }
    else
    {
        cout << "Minimum travelling cost: "
             << minCost << endl;
    }

    return 0;
}

