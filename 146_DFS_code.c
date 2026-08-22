#include <stdio.h>
int adj_met[7][7] = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 0},
    {1, 0, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},

    {0, 0, 0, 0, 1, 0, 0},

    {0, 0, 0, 0, 1, 0, 0}};
// 0  1  2  3  4  5  6
int visited[7] = {0, 0, 0, 0, 0, 0, 0};
void DFS(int i)
{
    int j;
    printf("%d ", i);
    visited[i] = 1;
    for (j = 0; j < 7; j++) // 6
    {
        if (adj_met[i][j] == 1 && visited[j] == 0)
        {
            DFS(j); // 6
        }
    }
}
void main()
{
    DFS(4);
}