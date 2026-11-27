/* AIM: To implement the Bellman-Ford algorithm to find the single source shortest path in a graph and detect negative weight cycles. */

#include <stdio.h>

#define MAX 100
#define INF 999999

struct Edge
{
    int src, dest, weight;
};

int main()
{
    int V, E, source;
    struct Edge edge[MAX];
    int dist[MAX];

    printf("Enter number of vertices: ");
    scanf("%d", &V);

    printf("Enter number of edges: ");
    scanf("%d", &E);

    printf("Enter source, destination and weight of each edge:\n");

    for (int i = 0; i < E; i++)
    {
        scanf("%d %d %d",
              &edge[i].src,
              &edge[i].dest,
              &edge[i].weight);
    }

    printf("Enter source vertex: ");
    scanf("%d", &source);

    for (int i = 0; i < V; i++)
        dist[i] = INF;

    dist[source] = 0;

    // Relax all edges V-1 times
    for (int i = 1; i <= V - 1; i++)
    {
        for (int j = 0; j < E; j++)
        {
            int u = edge[j].src;
            int v = edge[j].dest;
            int w = edge[j].weight;

            if (dist[u] != INF &&
                dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
            }
        }
    }

    // Check for negative weight cycle
    for (int j = 0; j < E; j++)
    {
        int u = edge[j].src;
        int v = edge[j].dest;
        int w = edge[j].weight;

        if (dist[u] != INF &&
            dist[u] + w < dist[v])
        {
            printf("Graph contains a negative weight cycle.\n");
            return 0;
        }
    }

    printf("\nShortest distances from source %d:\n", source);

    for (int i = 0; i < V; i++)
    {
        if (dist[i] == INF)
            printf("Vertex %d : Unreachable\n", i);
        else
            printf("Vertex %d : %d\n", i, dist[i]);
    }

    return 0;
}
