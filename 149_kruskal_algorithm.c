#include <stdio.h>
#include <stdlib.h>
struct Edge
{
    int u, v, weight;
};
int n;
int parent[100];
int find(int i)
{
    if (parent[i] == -1)
        return i;
    return parent[i] = find(parent[i]);
}
int uni(int u, int v)
{
    int rootU = find(u); // 4
    int rootV = find(v); //

    if (rootU != rootV)
    {
        parent[rootV] = rootU; // Merge sets
        return 1;
    }
    return 0;
}
void kruskal(struct Edge edges[], int edgeCount)
{
    int i, ne = 0, mincost = 0;

    // Initialize parent array (Disjoint Set)
    for (i = 0; i < n; i++)
    {
        parent[i] = -1;
    }

    printf("The edges of Minimum Cost Spanning Tree are:\n");

    for (i = 0; i < edgeCount && ne < n - 1; i++)
    {
        if (uni(edges[i].u, edges[i].v))
        {
            printf("%d edge (%d,%d) = %d\n", ++ne, edges[i].u, edges[i].v,
                   edges[i].weight);
            mincost += edges[i].weight;
        }
    }

    printf("\nMinimum cost = %d\n", mincost);
}
void main()
{
    int adjmat[5][5] = {
        {0, 1, 7, 10, 5},
        {1, 0, 3, 0, 0},
        {7, 3, 0, 4, 0},
        {10, 0, 4, 0, 2},
        {5, 0, 0, 2, 0},
    };
    n = 5;
    int i, j, edgeCount = 0;
    struct Edge edges[10]; // Max edges

    // store edges with weight in structure array
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            int weight = adjmat[i][j];
            if (weight != 0 && i < j) // Avoid duplicates and diagonal elements
            {
                edges[edgeCount].u = i;
                edges[edgeCount].v = j;
                edges[edgeCount].weight = weight;
                edgeCount++;
            }
        }
    }

    printf("before sorting edges....\n");
    for (i = 0; i < edgeCount; i++)
    {
        printf("%d  %d<----->%d  %d\n", i + 1, edges[i].u, edges[i].v,
               edges[i].weight);
    }

    // sorting edges
    for (i = 0; i < edgeCount - 1; i++)
    {
        for (j = 0; j < (edgeCount - 1) - i; j++)
        {
            if (edges[j].weight > edges[j + 1].weight)
            {
                struct Edge temp = edges[j];
                edges[j] = edges[j + 1];
                edges[j + 1] = temp;
            }
        }
    }

    printf("after sorting edges....\n");
    for (i = 0; i < edgeCount; i++)
    {
        printf("%d  %d<----->%d  %d\n", i + 1, edges[i].u, edges[i].v,
               edges[i].weight);
    }
    printf("\n");
    kruskal(edges, edgeCount);
}