#include <iostream>
#include <algorithm>
using namespace std;

const int MAX = 20;

struct Edge
{
    int u;
    int v;
    int weight;
};

int find(int parent[], int v)
{
    if (parent[v] != v)
    {
        parent[v] = find(parent, parent[v]);
    }

    return parent[v];
}

void unionSets(int parent[], int rank[],
               int u, int v)
{
    u = find(parent, u);
    v = find(parent, v);

    if (rank[u] < rank[v])
    {
        parent[u] = v;
    }
    else if (rank[u] > rank[v])
    {
        parent[v] = u;
    }
    else
    {
        parent[v] = u;
        rank[u]++;
    }
}

bool compareEdges(Edge a, Edge b)
{
    return a.weight < b.weight;
}

int main()
{
    cout << "[REDACTED] [REDACTED]\n";

    int n;
    int graph[MAX][MAX];

    cout << "Enter number of vertices: ";
    cin >> n;

    if (n < 1 || n > MAX)
    {
        cout << "Invalid number of vertices.\n";
        return 1;
    }

    cout << "Enter adjacency matrix (0 for no edge):\n";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> graph[i][j];
        }
    }

    Edge edges[MAX * (MAX - 1) / 2];
    int edgeCount = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (graph[i][j] != 0)
            {
                edges[edgeCount].u = i;
                edges[edgeCount].v = j;
                edges[edgeCount].weight = graph[i][j];
                edgeCount++;
            }
        }
    }

    sort(edges, edges + edgeCount, compareEdges);

    int parent[MAX];
    int rank[MAX] = {0};

    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }

    int totalCost = 0;
    int selectedEdges = 0;

    cout << "\nEdges in the Minimum Spanning Tree:\n";

    for (int i = 0;
         i < edgeCount && selectedEdges < n - 1;
         i++)
    {
        int u = edges[i].u;
        int v = edges[i].v;
        int weight = edges[i].weight;

        if (find(parent, u) != find(parent, v))
        {
            cout << u + 1 << " - "
                 << v + 1 << " : "
                 << weight << "\n";

            unionSets(parent, rank, u, v);

            totalCost += weight;
            selectedEdges++;
        }
    }

    if (selectedEdges != n - 1)
    {
        cout << "The graph is disconnected. "
             << "MST does not exist.\n";
    }
    else
    {
        cout << "Minimum Cost = " << totalCost << "\n";
    }

    return 0;
}
