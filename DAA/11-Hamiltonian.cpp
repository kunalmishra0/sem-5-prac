#include <iostream>
using namespace std;

const int MAX = 10;
int n;
int graph[MAX][MAX];
int path[MAX];

bool isSafe(int v, int pos)
{
    if (graph[path[pos - 1]][v] == 0)
    {
        return false;
    }

    for (int i = 0; i < pos; i++)
    {
        if (path[i] == v)
        {
            return false;
        }
    }

    return true;
}

bool hamiltonianCycle(int pos)
{
    if (pos == n)
    {
        return graph[path[pos - 1]][path[0]] == 1;
    }

    for (int v = 1; v < n; v++)
    {
        if (isSafe(v, pos))
        {
            path[pos] = v;

            if (hamiltonianCycle(pos + 1))
            {
                return true;
            }

            path[pos] = -1;
        }
    }

    return false;
}

int main()
{
    cout << "[REDACTED] [REDACTED]" << endl;

    cout << "Enter the number of vertices (maximum 10): ";
    cin >> n;

    if (n < 3 || n > MAX)
    {
        cout << "Number of vertices must be between 3 and 10.\n";
        return 0;
    }

    cout << "Enter the adjacency matrix:\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        path[i] = -1;
    }

    path[0] = 0;

    if (hamiltonianCycle(1))
    {
        cout << "Hamiltonian Cycle exists:\n";

        for (int i = 0; i < n; i++)
        {
            cout << path[i] << " -> ";
        }

        cout << path[0] << endl;
    }
    else
    {
        cout << "Hamiltonian Cycle does not exist.\n";
    }

    return 0;
}
