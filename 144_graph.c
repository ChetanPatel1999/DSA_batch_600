#include <stdio.h>
int V = 5;
void init(int adjacency_mat[V][V])
{
    int i, j;
    for (i = 0; i < V; i++) // 0
    {
        for (j = 0; j < V; j++)
        {
            adjacency_mat[i][j] = 0;
        }
    }
}

void connectEdges(int adjacency_mat[V][V], int i, int j)
{
    adjacency_mat[i][j] = 1;
    adjacency_mat[j][i] = 1;
}
void display_adjacency_mat(int adjacency_mat[V][V])
{
    char data[] = {'A', 'B', 'C', 'D', 'E'};
    int i, j;
    printf(" ");
    for (i = 0; i < V; i++) // 0
    {
        printf("  %c", data[i]);
    }
    printf("\n");
    for (i = 0; i < V; i++) // 0
    {
        printf("%c  ", data[i]);
        for (j = 0; j < V; j++)
        {
            printf("%d  ", adjacency_mat[i][j]);
        }
        printf("\n");
    }
}
void main()
{

    int adjacency_mat[V][V];
    init(adjacency_mat);
    connectEdges(adjacency_mat, 0, 1);
    connectEdges(adjacency_mat, 0, 3);
    connectEdges(adjacency_mat, 1, 3);
    connectEdges(adjacency_mat, 1, 2);
    connectEdges(adjacency_mat, 4, 3);
    connectEdges(adjacency_mat, 4, 2);

    display_adjacency_mat(adjacency_mat);
}